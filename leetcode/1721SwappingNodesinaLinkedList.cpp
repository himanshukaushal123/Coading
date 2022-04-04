class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL)return NULL;
        if(head->next==NULL) return head;
        ListNode* first=head;
        ListNode* second=head;
        ListNode* track=head;
        int count=0;
        //First find kth elemet from left by moving first pointer only and assign that node to track
        while(first!=NULL && count!=k){
            track=first;
            first=first->next;
            count++;
        }
        // After getting kth elemet from left now move both the pointer first and second until first!=NULL
        while(first!=NULL){
            first=first->next;
            second=second->next;
        }
        swap(track->val,second->val);
        return head;

    }
};
