class Solution {
    int getl(ListNode* head){
        int c=1;
        while(head->next != NULL){
            head=head->next;
            c++;
        }
        return c;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 ;
        ListNode *ptr2;
        int l1=gl(headA);
        int l2=gl(headB);
        int d=0;
        if(l1>l2){
            d=l1-l2;
            ptr1=headA;
            ptr2=headB;
        }
        else{
            d=l2-l1;
            ptr1=headB;
            ptr2=headA;
        }
        while(d--){
            ptr1=ptr1->next;
            if(ptr1==NULL){
                return NULL;
            }
        }
        while(ptr1!= NULL && ptr2!= NULL){
            if(ptr1==ptr2){
                return ptr1;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
        return NULL;
        
    }
};