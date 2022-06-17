bool isl(Node* root){
   if(root->left==NULL && root->right==NULL)
   return true;
   return false;
}
   void lb(Node* root,vector<int> &v){
       if(isl(root))
       return;
         root = root->left;
       while(root){
           if(!isl(root))
           v.push_back(root->data);
           if(root->left)
           root=root->left;
           else
           root=root->right;
       }
   }
   void l(Node* root,vector<int> &v){
       if(isl(root)){
           v.push_back(root->data);
           return;
       }
       if(root->left)
       l(root->left,v);
       if(root->right)
       l(root->right,v);
       return;
       
    }
   void rb(Node* root,vector<int> &v){
       if(root->right==NULL)
       return;
       root=root->right;
       vector<int> a;
        if(isl(root))
       return;
       
       while(root){
            if(!isl(root))
           a.push_back(root->data);
           if(root->right)
           root=root->right;
           else
           root=root->left;
       }
       int s=a.size();
       for(int i=s-1;i>=0;i--){
           v.push_back(a[i]);
       }
       
       
   }
   vector <int> boundary(Node *root)
   {
       //Your code here
      
       vector<int> ans;
        if(root==NULL)
       return ans;
       //Adding root
      if(!isl(root)){
          ans.push_back(root->data);
      }
       lb(root,ans);
       l(root,ans);
       rb(root,ans);
       return ans;
   }
