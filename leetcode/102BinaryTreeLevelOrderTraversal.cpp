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
    int hig(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lr=hig(root->left);
        int hr=hig(root->right);
        return max(lr,hr)+1;
    }
    void kthlevel(TreeNode* root,int k,vector<int>&ans){
        if(root==NULL){
         return;   
        }
        if(k==1){
            ans.push_back(root->val);
        }
        kthlevel(root->left,k-1,ans);
        kthlevel(root->right,k-1,ans);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
       int height=hig(root);
        vector<int>ans;
        vector<vector<int>> vec;
        for(int i=1;i<=height;i++){
          kthlevel(root,i,ans);
          vec.push_back(ans);
          ans.clear();
      }
      return vec;
    }
};

//2nd method
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>vec;
        vector<int>ans;
        if(root==NULL) return vec;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode * temp=q.front();
            if(temp==NULL){
                vec.push_back(ans);
                ans.clear();
                q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
          }
          else{
              q.pop();
              ans.push_back(temp->val);
              if(temp->left)
              q.push(temp->left);
              if(temp->right)
              q.push(temp->right);
            }
        }
        return vec;
    }
};
