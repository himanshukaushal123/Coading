Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *dummy=new Node(0);
    Node *temp=dummy;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            temp->next=new Node(head1->data);
            temp=temp->next;
            head1=head1->next;
        }else{
            temp->next=new Node(head2->data);
            temp=temp->next;
            head2=head2->next;
        }
    }
    if(head1!=NULL)temp->next=head1;
    else temp->next=head2;
    return dummy->next;
} 
