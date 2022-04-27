class Solution{   
public:
bool subsetSumTo(int n, int k, vector<int> &arr,vector<vector<int>>&dp){
if(k==0) return true;
	if(n==0) return arr[n]==k;
	if(dp[n][k]!=-1) return dp[n][k];
	bool nottake=subsetSumTo(n-1,k,arr,dp);
	bool take=false;
	if(k>=arr[n]){
		take=subsetSumTo(n-1,k-arr[n],arr,dp);
	}
	return dp[n][k]=take || nottake;
}
    bool isSubsetSum(vector<int>nums, int sum){
        // code here 
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
	    return subsetSumTo(n-1,sum,nums,dp);
    }
