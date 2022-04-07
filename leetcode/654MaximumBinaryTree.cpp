class Solution {
public:
    //For Finding Max Element
     int max(vector<int>&nums, int l, int r) {
        int max_i = l;
        for (int i = l; i < r; i++) {
            if (nums[max_i] < nums[i])
                max_i = i;
        }
        return max_i;
    }
    //MAKING TREE
    TreeNode* solve(vector<int> &nums,int s,int e){
         if(s==e){
             return NULL;
         }
        int elm = max(nums, s, e);
        TreeNode * root=new TreeNode(nums[elm]);
        root->left=solve(nums,s,elm);
        root->right=solve(nums,elm+1,e);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
    return solve(nums,0,nums.size());
    }
};
