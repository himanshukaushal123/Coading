 Node* reverse(Node *head){
        Node*newnode=NULL;
        while(head!=NULL){
            Node *nex=head->next;
            head->next=newnode;
            newnode=head;
            head=nex;
        }
        return newnode;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        if(head->next==NULL && head->data==9){
           head->data=1;
           head->next=new Node(0);
           return head;
       }
       head=reverse(head);
       int carry=0;
       int sum=0;
       sum=1+head->data;
       head->data=sum%10;
       carry=sum/10;
       Node *pre=NULL;
       Node*temp=head->next;
       if(carry==0){head=reverse(head);return head;}
       else{
           while(temp!=NULL&&carry!=0){
              sum=carry+temp->data;
              carry=sum/10;
              temp->data=sum%10;
              pre=temp;
              temp=temp->next;
           }
       }
       if(carry!=0){pre->next=new Node(carry);}
       head=reverse(head);
       return head;
        
    }
