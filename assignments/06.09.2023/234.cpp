class Solution {
    ListNode* reverse(ListNode* head) {
        if(head ==NULL || head->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode* curr=head;
        ListNode* forw = NULL;
        while(curr != NULL){
            forw = curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
        }
        return prev;
        
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL) return true;
        ListNode*fast=head,*slow=head;
        while(fast->next!= NULL && fast->next->next!=NULL ){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *sh= reverse(slow->next);
        ListNode *fh = head;

        while(sh !=NULL && fh!=NULL){
            if(fh->val != sh->val){
                return false;
            }
            fh=fh->next;
            sh=sh->next;
        }
        return true;
    }
};
