class Solution
{
    public:
    int hig(Node* root){
        if(root==NULL){
            return 0;
        }
        int lr=hig(root->left);
        int hr=hig(root->right);
        return max(lr,hr)+1;
    }
    void kthlevel(Node* root,int k,vector<int>&ans){
        if(root==NULL){
         return;   
        }
        if(k==1){
            ans.push_back(root->data);
        }
        kthlevel(root->left,k-1,ans);
        kthlevel(root->right,k-1,ans);
    }
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      //height of the tree
      int height=hig(node);
      for(int i=1;i<=height;i++){
          kthlevel(node,i,ans);
      }
      return ans;
    }
};
