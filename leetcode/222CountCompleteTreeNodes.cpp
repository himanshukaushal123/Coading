class Solution {
public:
    int heightleft(TreeNode* root){
      int heig=0;
        while(root){
            heig++;
            root=root->left;
        }
        return heig;     
    }
    int heightright(TreeNode* root){
      int heig=0;
        while(root){
            heig++;
            root=root->right;
        }
        return heig;     
    }
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }   
        int lh=heightleft(root);
        int rh=heightright(root);
        if(lh==rh)
            return (1<<lh)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
