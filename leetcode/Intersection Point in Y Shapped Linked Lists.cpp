int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *l1=head1;
    Node *l2=head2;
    while(l1!=l2){
        l1=l1==NULL? head2:l1->next;
        l2=l2==NULL? head1:l2->next;
    }
    return l1->data;
}
