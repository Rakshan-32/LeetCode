class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next=head;
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        temp=&dummy;
        int pos=len-n;
        while(pos--) temp=temp->next;
        ListNode* del=temp->next;
        temp->next=del->next;
        delete del;
        return dummy.next;
    }
};