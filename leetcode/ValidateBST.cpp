class Solution {
public:
    bool solve(TreeNode* root,long min,long max){
         if(root==NULL){
           return true;
       } 
        if(root->val>min && root->val<max && solve(root->left,min,root->val) && solve(root->right,root->val,max)){
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
      return solve(root,LONG_MIN,LONG_MAX);
    }
};
//2nd method
class Solution {
public:
    bool solve(TreeNode* root,long min,long max){
         if(root==NULL){
           return true;
       } 
      if(root->val>=max || root->val<=min) return false;
      return solve(root->left,min,root->val) && solve(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
      return solve(root,LONG_MIN,LONG_MAX);
    }
};
