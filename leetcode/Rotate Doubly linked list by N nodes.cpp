Node *solve(Node*head,int k){
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //For making circular
    head->prev=temp;
    temp->next=head;
    while(k--){
        temp=temp->next;
    }
    
    Node*nex=temp->next;
    nex->prev=NULL;
    temp->next=NULL;
}
