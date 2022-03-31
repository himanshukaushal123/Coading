class Solution {
public:
   TreeNode* solve(int s,int e,vector<int>arr){
      if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode * root=new TreeNode(arr[mid]);
    root->left=solve(s,mid-1,arr);
    root->right=solve(mid+1,e,arr);
    return root;
}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0,nums.size()-1,nums);
    }
};
