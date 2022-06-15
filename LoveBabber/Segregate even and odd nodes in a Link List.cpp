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

//Second Approch' Node* divide(int N, Node *head){
        // code here
        if(!head || !head->next)return head;
        Node *end=head;
        Node *prev=head;
        Node *curr=head;
        while(end->next!=NULL)end=end->next;
        while(curr && N--){
            //odd walo ko peeche bejo
            if((curr->data)&1){
                if(curr==head){
                    head=head->next;
                    end->next=curr;
                    end=end->next;
                    end->next=NULL;
                    curr=head;
                    prev=head;
                }
                else if(curr!=end){
                        prev->next=curr->next;
                        end->next=curr;
                        curr=curr->next;
                        end=end->next;
                        end->next=NULL;
                    }
            }
            //even walo ke sath kuch nahi
            else{
                    if(prev!=curr)prev=prev->next;
                    curr=curr->next;
                }
            }
            return head;
        }
