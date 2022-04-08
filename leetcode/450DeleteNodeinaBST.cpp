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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }
        else if(key<root->val){
            root->left=deleteNode(root->left,key);
            return root;
        }else if(key==root->val){
            //Case 1 if have no child
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            //Case 2 have one child
            if(root->left!=NULL && root->right==NULL){
                TreeNode *temp=root->left;
                delete root;
                return temp;
            }
            if(root->right!=NULL&& root->left==NULL){
                TreeNode *temp=root->right;
                delete root;
                return temp;
            }
            //Case 3 have 2 child
            TreeNode*replace=root->right;
            while(replace->left!=NULL){
                replace=replace->left;
            }
            root->val=replace->val;
            root->right=deleteNode(root->right,replace->val);
            return root;
        }
        else{
            root->right=deleteNode(root->right,key);
            return root;
        }
    }
};
