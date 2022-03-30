int countNode(TreeNode* root){
    if(root==NULL){
        return 0;
    return root->val+countNode(root->left)+countNode(root->right);
    }
    
}
