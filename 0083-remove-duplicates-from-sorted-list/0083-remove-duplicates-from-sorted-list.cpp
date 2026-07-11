class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return head;
        ListNode* temp=head;
        while(temp && temp->next){
            if(temp->val==temp->next->val){
                ListNode* del=temp->next;
                temp->next=del->next;
                delete del;
            }
            else temp=temp->next;
        }
        return head;
    }
};