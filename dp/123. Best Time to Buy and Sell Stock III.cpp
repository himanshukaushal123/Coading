class Solution {
public:
    int solve(int ind,int buy,int cap,int profit,vector<int>&prices,vector<vector<vector<int>>>&dp){
        if(cap==0)return 0;
        if(ind==prices.size())return 0;
        if(dp[ind][buy][cap]!=-1){
            return dp[ind][buy][cap];
        }
        if(buy){
            profit= max(-prices[ind]+solve(ind+1,0,cap,profit,prices,dp),solve(ind+1,1,cap,profit,prices,dp));
        }else{
            profit=max(prices[ind]+solve(ind+1,1,cap-1,profit,prices,dp),solve(ind+1,0,cap,profit,prices,dp));
        }
        return dp[ind][buy][cap]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int cap=2;
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return solve(0,1,2,INT_MIN,prices,dp);
    }
};
