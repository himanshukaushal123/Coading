Node* reverseDLL(Node * head)
{
    //Your code here
    Node* newnode=NULL;
    while(head!=NULL){
        Node* nex=head->next;
        head->prev=head->next;
        head->next=newnode;
        newnode=head;
        head=nex;
    }
    return newnode;
}
