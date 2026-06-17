class Solution {
public:


ListNode* reverse(ListNode* prev, ListNode* curr) {

  
    if(curr == NULL) {
        return prev;
    }

    ListNode* forward = curr->next;
    curr->next = prev;

    return reverse(curr, forward);
 }
    ListNode* reverseList(ListNode* head) {
      
     head = reverse(NULL, head);

        return head;
    }
};