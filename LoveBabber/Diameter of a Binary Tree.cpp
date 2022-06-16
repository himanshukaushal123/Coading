 int maxi=INT_MIN;
    int solve(Node *root){
        if(root==NULL)return 0;
        int lh=solve(root->left);
        int rh=solve(root->right);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) {
        // Your code here
       int i=solve(root);
       return maxi+1;
    }
