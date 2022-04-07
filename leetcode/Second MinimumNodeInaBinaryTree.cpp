class Solution {
public:
    void preorder(TreeNode *root,set<int>&s){
        if(root==NULL){
            return;
        }
        s.insert(root->val);
        preorder(root->left,s);
        preorder(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) {
       set<int> s;
        preorder(root,s);
        if(s.size()==1 || s.size()==0){
            return -1;
        }
        for(auto i:s){
            cout<<i<<" ";
        }
        auto it=s.begin();
        it++;
        return *it;
    }
};
