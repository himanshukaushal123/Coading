int countNode(TreeNode* root){
    if(root==NULL){
        return 0;
    return 1+countNode(root->left)+countNode(root->right);
    }
    
}
