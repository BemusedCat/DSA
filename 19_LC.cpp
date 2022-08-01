class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t1=head,*t2=head;
        for(int i=0;i<n;++i){
            t2=t2->next;
        }
    if (!t2) return head->next;
        while(t2->next){
        t2=t2->next;
        t1=t1->next;
        }
        t1->next=t1->next->next;
        return head;
    }
};
