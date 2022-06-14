Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        Node *prev=NULL;
        Node *curr=head;
        Node *nex=NULL;
        int count=0;
        //reverse
        while(curr!=NULL &&count<2){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            count++;
        }
        //Recursion call
      if(nex!=NULL){
          head->next=pairWiseSwap(nex);
      }
      return prev;
    }
