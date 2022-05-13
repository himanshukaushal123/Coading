struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL)return NULL;
        Node *newNode=NULL;
        while(head!=NULL){
            Node *nex=head->next;
            head->next=newNode;
            newNode=head;
            head=nex;
        }
        return newNode;
    }
