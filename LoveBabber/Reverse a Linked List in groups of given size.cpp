struct node*rev(struct node*root){
        node*newnode=NULL;
        while(root!=NULL){
            node*nex=root->next;
            root->next=newnode;
            newnode=root;
            root=nex;
        }
        return newnode;
    }
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
       if(head==NULL || k==1)return head;
       
       node*dummy=new node(0);
       dummy->next=head;
       
       node *curr=dummy,*nex=dummy,*pre=dummy;
       int count=0;
       
       while(curr->next!=NULL){
           curr=curr->next;
           count++;
       }
       while(count>=k){
           curr=pre->next;
           nex=curr->next;
           for(int i=1;i<k;i++){
               curr->next=nex->next;
               nex->next=pre->next;
               pre->next=nex;
               nex=curr->next;
           }
           pre=curr;
           count-=k;
       }
    //   cout<<curr->data<<endl;
    //   cout<<pre->data<<endl;
    //   cout<<nex->data<<endl;
         if(curr->next!=NULL){
          node *temp=rev(nex);
        //   cout<<temp->data<<endl;
          curr->next=temp;
        //   cout<<nex->data;
      }
      return dummy->next;
        
    }
