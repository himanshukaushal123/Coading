class Solution {
public:
    int solve(vector<int>&nums,int n,vector<int>&dp){
        if(n==0) return nums[n];
        if(n<0) return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+solve(nums,n-2,dp);
        int notpick=0+solve(nums,n-1,dp);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp1;
        vector<int>temp2;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
         vector<int>dp(temp1.size()+1,-1);
         int i=solve(temp1,temp1.size()-1,dp);
         cout<<temp1.size()<<endl;
         vector<int>dp1(temp2.size()+1,-1);
         int j=solve(temp2,temp2.size()-1,dp1);
         cout<<temp2.size();
         return max(i,j);
    }
};
