 Node *copyRandomList(Node *head)
    {
        //Write your code here
        Node* curr=head;
        Node* temp;
        while(curr){
            temp=curr->next;
            curr->next=new Node(curr->val);
            curr->next->next=temp;
            curr=temp;
        }
        
        curr=head;
        while(curr){
            curr->next->random=curr->random?curr->random->next:curr->random;
            curr=curr->next->next;
        }
        
        Node* original=head;
        if(head==NULL || head->next==NULL){
            Node* clone=head;
            return clone;
        }
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
