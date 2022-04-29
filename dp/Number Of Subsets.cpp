 int solve(int i,vector<int>&nums,vector<vector<int>>&dp,int k){
        if(k==0)return 1;
        if(i==0)return nums[0]==k;
        if(dp[i][k]!=-1)return dp[i][k];
        int notpick=solve(i-1,nums,dp,k);
        int pick=0;
        if(k>=nums[i]){
            pick=solve(i-1,nums,dp,k-nums[i]);
        }
        return dp[i][k]=pick+notpick;
    }
   int findWays(vector<int> &nums, int target) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return solve(n-1,nums,dp,target);
    }
