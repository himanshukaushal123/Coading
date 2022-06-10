 ListNode* middleNode(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head;
        while(f!=NULL && f->next!=NULL){
            f=f->next->next;
            s=s->next;
        }
        return s;
    }
