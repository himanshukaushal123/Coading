vector<int> diagonal(Node *root)
{
   // your code here
   vector<int>vec;
   if(root==NULL)return vec;
   queue<Node*>pq;
   pq.push(root);
   while(!pq.empty()){
       Node *tmp=pq.front();
       pq.pop();
       while(tmp){
           if(tmp->left)pq.push(tmp->left);
           vec.push_back(tmp->data);
           tmp=tmp->right;
       }
   }
   return vec;
}
https://drive.google.com/file/d/13nLuGxtIzY1KUQZKw3sArDSSsRMzbu_E/view?usp=sharing
