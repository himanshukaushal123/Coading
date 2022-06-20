int flag=1;
    int solve(Node*root){
        if(root==NULL)return 0;
        // if(root->left==NULL && root->right==NULL) return root->data;
        if(flag==0)return 0;
        int a=solve(root->left);
        int b=solve(root->right);
        int x=root->data;
        if(a+b!=root->data)flag=0;
        return a+b+x;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         flag=1;
         solve(root);
         return flag;
      
    }
