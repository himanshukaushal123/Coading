/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode * root,int &count,int max){
        if(root==NULL)return;
        if(root->val>=max){
            max=root->val;
            count++;
        }
        preorder(root->left,count,max);
        preorder(root->right,count,max);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        int count=0;
        int max=INT_MIN;
        preorder(root,count,max);
        return count;
        
    }
};
