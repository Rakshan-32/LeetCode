class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val==val){
            ListNode* del=head;
            head=head->next;
            delete del;
        }
        ListNode* cur=head;
        while(cur && cur->next){
            if(cur->next->val==val){
                ListNode* del=cur->next;
                cur->next=del->next;
                delete del;
            }
            else cur=cur->next;
        }
        return head;
    }
};