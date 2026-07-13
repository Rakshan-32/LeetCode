class Solution {
public:
    bool isPalindrome(ListNode* head) {
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
        while(s){
            if(f->val!=s->val) return false;
            f=f->next;
            s=s->next;
        }
        return true;
    }
};