vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   while(!q.empty()){
       Node* t=q.front();
       q.pop();
       while(t!=NULL){
           ans.push_back(t->data);
           if(t->left){
               q.push(t->left);
           }
           t=t->right;
       }
   }
   return ans;
}
