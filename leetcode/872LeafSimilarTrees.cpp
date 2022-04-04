class Solution {
public:
    void leafNode(TreeNode *root,vector<int>&vec){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            vec.push_back(root->val);
        }
        leafNode(root->left,vec);
        leafNode(root->right,vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1,v2;
        leafNode(root1,v1);
        leafNode(root2,v2);
        return v1==v2; 
    }
};
