class Solution {
public:
    TreeNode * solve(vector<int> &pre,int &i,int bound){
        if(i==pre.size()|| pre[i]>bound){
            return NULL;
        }
        TreeNode *root=new TreeNode(pre[i++]);
        root->left=solve(pre,i,root->val);
        root->right=solve(pre,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
     int i=0;
        return solve(preorder,i,INT_MAX);
    }
};
