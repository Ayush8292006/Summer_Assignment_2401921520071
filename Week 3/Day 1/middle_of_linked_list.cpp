class Solution {
public:
ListNode* getMiddle(ListNode* &head){
    if(head==NULL){
        return head;
    }

    if(head -> next ==NULL){
        return head;
    }

    ListNode* slow=head;
    ListNode* fast=head;

    while(slow != NULL && fast != NULL){
        fast=fast -> next;
        if(fast != NULL){
            fast=fast -> next;
            slow =slow -> next;
        }
        
    }
    return slow;
}
    ListNode* middleNode(ListNode* head) {
        head =getMiddle(head);

        return head;
    }
};