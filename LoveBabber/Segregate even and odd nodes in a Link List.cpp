 Node* divide(int N, Node *head){
        // code here
        Node *even=NULL;
        Node *odd=NULL;
        Node *temp1=NULL;
        Node *temp2=NULL;
        while(head!=NULL){
            if(head->data%2==0){
                if(even==NULL){
                    Node*t=new Node(head->data);
                    even=t;
                    temp1=even;
                }else{
                    temp1->next=new Node(head->data);
                    temp1=temp1->next;
                }
            }else{
                if(odd==NULL){
                    Node*t=new Node(head->data);
                    odd=t;
                    temp2=odd;
                }else{
                    temp2->next=new Node(head->data);
                    temp2=temp2->next;
                }
            }
            head=head->next;
        }
        if(temp1==NULL)return odd;
        else if(temp2==NULL)return even;
        else
        temp1->next=odd;
        return even;
    }
