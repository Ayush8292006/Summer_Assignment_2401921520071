class Solution {
public:
int findLength(ListNode* head) {
    int len = 0;
    ListNode* temp = head;
    while(temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            int len = findLength(head);

            int num=len-n+1;
            if(num==1){
                return head->next;
            }
            int i=1;
            ListNode* prev = NULL;

            ListNode*temp=head;

            while(i<=num){
                if(i==num){
                    prev->next=temp->next;
                    break;

                }
                prev = temp;

                temp=temp->next;
                i++;
            }

            return head;
    }
};