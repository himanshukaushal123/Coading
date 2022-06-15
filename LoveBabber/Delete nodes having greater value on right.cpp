    Node *reverse(Node * head){
        Node *newnode=NULL;
        while(head!=NULL){
            Node *nex=head->next;
            head->next=newnode;
            newnode=head;
            head=nex;
        }
        return newnode;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head=reverse(head);
        Node *curr=head;
        int ma=head->data;
        Node *prev=head;
        head=head->next;
        while(head){
            if(head->data>=ma){
                ma=head->data;
                prev=head;
                head=head->next;
            }else{
                prev->next=head->next;
                head=prev->next;
            }
        }
       head=reverse(curr);
       return head;
    }
