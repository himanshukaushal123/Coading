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
    void kthlevel(TreeNode* root,int k,double &sum,double &count){
        if(root==NULL){
         return;   
        }
        if(k==1){
            sum=sum+root->val;
            count++;
        }
        kthlevel(root->left,k-1,sum,count);
        kthlevel(root->right,k-1,sum,count);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        int height=hig(root);
        vector<double>vec;
        double sum=0;
        double count=0;
        for(int i=1;i<=height;i++){
            cout<<count<<" "<<sum<<endl;
          kthlevel(root,i,sum,count);
          vec.push_back(sum/count);
          sum=0;
          count=0;
      }
        return vec;
    }
};
