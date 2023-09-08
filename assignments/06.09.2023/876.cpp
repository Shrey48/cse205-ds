class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head, *slow=head;
        while(fast->next != NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next !=NULL) fast=fast->next;
        }
        return slow;
    }
};