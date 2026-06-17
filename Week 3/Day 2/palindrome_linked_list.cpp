class Solution {
public:

ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = curr->next;

    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

bool checkPalindrome(ListNode* &head) {

    if(head == NULL) {  
        return true;
    }

    if(head->next == NULL) {
                return true;
    }

   
    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }

   
    ListNode* reverseLLkaHead = reverse(slow->next);

    slow->next = reverseLLkaHead;

    
    ListNode* temp1 = head;
    ListNode* temp2 = reverseLLkaHead;

    while(temp2 != NULL) {
        if(temp1->val != temp2->val) {
            
            return false;
        }
        else {
           
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }

    return true;
}

    bool isPalindrome(ListNode* head) {
        bool ans = checkPalindrome(head);
        return ans;
    }
};