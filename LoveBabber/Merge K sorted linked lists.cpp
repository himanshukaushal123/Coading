 Node *smerge(Node *a,Node*b){
        Node *ans=NULL,*temp=NULL;
        while(a!=NULL && b!=NULL){
            if(a->data<=b->data){
                if(ans==NULL){
                    Node *t=new Node(a->data);
                    ans=t;
                    temp=ans;
                    a=a->next;
                }else{
                    temp->next=new Node(a->data);
                    temp=temp->next;
                    a=a->next;
                }
            }
            else if(a->data>b->data){
                if(ans==NULL){
                    Node *t=new Node( b->data);
                    ans=t;
                    temp=ans;
                    b=b->next;
                }else{
                    temp->next=new Node(b->data);
                    temp=temp->next;
                    b=b->next;
                }
            }
        }
        if(a!=NULL)temp->next=a;
        else temp->next=b;
        return ans;
    }
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           int i=0;
           int last=K-1;
           int j;
           while(last!=0){
               i=0;
               j=last;
               while(i<j){
                   arr[i]=smerge(arr[i],arr[j]);
                   i++;
                   j--;
                   if(i>=j){
                       last=j;
                   }
               }
           }
           return arr[0];
           
    }
