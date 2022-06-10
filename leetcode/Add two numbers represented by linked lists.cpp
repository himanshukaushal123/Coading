 Node *reverse(Node* root){
        Node* newnode=NULL;
        while(root!=NULL){
            Node* nex=root->next;
            root->next=newnode;
            newnode=root;
            root=nex;
        }
        return newnode;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        int carry=0;
        Node*temp=NULL;
        Node*ans=NULL;
        while(first!=NULL && second!=NULL){
            int sum=0;
            if(first!=NULL){
                sum+=first->data;
                first=first->next;
            }
            if(second!=NULL){
                sum+=second->data;
                second=second->next;
            }
            sum+=carry;
            carry=sum/10;
            if(ans==NULL){
                Node* t=new Node(sum%10);
                ans=t;
                temp=ans;
            }else{
                temp->next=new Node(sum%10);
                temp=temp->next;
            }
        }
        // cout<<carry<<endl;
        if(first!=NULL){
            while(first!=NULL){
           int sum=0;
           sum=carry+first->data;
           carry=sum/10;
           temp->next=new Node(sum%10);
           temp=temp->next;
           first=first->next;
        }
        }
         if(second!=NULL){
           while(second!=NULL){
           int sum=0;
           sum=carry+second->data;
        //   cout<<sum<<endl;
           carry=sum/10;
           temp->next=new Node(sum%10);
           temp=temp->next;
           second=second->next;
            }
        }
        // cout<<carry<<endl;
        if(carry!=0)temp->next=new Node(carry);
        ans=reverse(ans);
        return ans;
    }
