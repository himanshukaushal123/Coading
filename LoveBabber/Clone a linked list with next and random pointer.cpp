Node *copyList(Node *head)
    {
        //Write your code here
        Node* curr=head;
        Node* temp;
        while(curr){
            temp=curr->next;
            curr->next=new Node(curr->data);
            curr->next->next=temp;
            curr=temp;
        }
        
        curr=head;
        while(curr){
            curr->next->arb=curr->arb?curr->arb->next:curr->arb;
            curr=curr->next->next;
        }
        
        Node*original=head;
        Node* clone=head->next;
        temp=clone;
        while(original && clone){
            original->next=original->next->next;
            clone->next=clone->next?clone->next->next:clone->next;
            original=original->next;
            clone=clone->next;
        }
        return temp;
    }
