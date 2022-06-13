struct Node* sort(struct Node* head,int k){
    if(head==NULL){
        return head;
    }
    priority_queue<Node*,vector<Node*>,cmp>pq;
    struct Node* ans=NULL,*curr;
    for(int i=0;head!=NULL&&i<=k;i++){
        pq.push(head);
        head=head->next;
    }
    while(!pq.empty()){
        if(ans==NULL){
            ans=pq.top();
            ans->prev=NULL;
            curr=ans;
        }else{
            curr->next=pq.top();
            pq.top->prev=curr;
            curr=pq.top();
        }
        pq.pop();
        if(head!=NULL){
            pq.push(head);
            head=head->next;
        }
    }
    curr->next=NULL;
    return ans;
}
