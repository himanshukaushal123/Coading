class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
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
        reverse(vec.begin(),vec.end());
        return vec;
  }
};
