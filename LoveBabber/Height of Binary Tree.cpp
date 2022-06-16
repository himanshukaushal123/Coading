 int height(struct Node* root){
        // code here 
        if(root==NULL)return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        return 1+max(rh,lh);
    }
