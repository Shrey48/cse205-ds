class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next == NULL) return false;
        ListNode* slow=head, *fast=head->next;
        while(slow !=fast){
            slow=slow->next;
            if(fast == NULL) return false;
            fast=fast->next;
            if(fast == NULL) return false;
            fast=fast->next;
        }
        return true;
    }
};