 Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        Node *pre;
        while(k--){
            pre=head;
            head=head->next;
        }
        pre->next=NULL;
        return head;
    }
