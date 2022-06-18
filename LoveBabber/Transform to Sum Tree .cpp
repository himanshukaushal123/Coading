 int solve(Node*root){
        if(root==NULL)return 0;
        int a=solve(root->left);
        int b=solve(root->right);
        int x=root->data;
        root->data=a+b;
        return a+b+x;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
https://drive.google.com/file/d/1gWcBNXL2Sa_b50a0rF5nGD_ZquiLNVVt/view?usp=sharing
