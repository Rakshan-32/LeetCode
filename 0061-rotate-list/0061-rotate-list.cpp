class Solution {
public:
    ListNode* rotateRight(ListNode* head,int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next){
            tail=tail->next;
            len++;
        }
        k=k%len;
        if(k==0) return head;
        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=0;i<k;i++) fast=fast->next;
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* newHead=slow->next;
        slow->next=NULL;
        fast->next=head;
        return newHead;
    }
};