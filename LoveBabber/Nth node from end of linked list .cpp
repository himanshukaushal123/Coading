int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node*fast=head;
       Node*slow=head;
       Node*tem=head;
       int count=0;
       while(tem!=NULL){
           tem=tem->next;
           count++;
       }
       if(n>count)return -1;
       while(fast!=NULL && n--){
           fast=fast->next;
       }
       while(fast!=NULL){
           fast=fast->next;
           slow=slow->next;
       }
       return slow->data;
}
