class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
        ListNode* cur=head;
        while(cur){
            if(cur->next && cur->val==cur->next->val){
                int x=cur->val;
                while(cur && cur->val==x){
                    ListNode* del=cur;
                    cur=cur->next;
                    delete del;
                }
                prev->next=cur;
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        return dummy.next;
    }
};