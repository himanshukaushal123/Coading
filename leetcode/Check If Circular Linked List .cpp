bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)return true;
   Node*f=head;
   Node*s=head;
   while(f!=NULL && f->next!=NULL){
       f=f->next->next;
       s=s->next;
       if(f==s)return true;
   }
   return false;
}
