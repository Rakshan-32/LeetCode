class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* cur=slow;
        while(cur){
            ListNode* nxt=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nxt;
        }
        ListNode* f=head;
        ListNode* s=prev;
        int ans=0;
        while(s){
            ans=max(ans,f->val+s->val);
            f=f->next;
            s=s->next;
        }
        return ans;
    }
};