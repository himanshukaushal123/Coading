//Recursive
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	if(k==0) return true;
	if(n==0) return arr[n]==k;
	bool nottake=subsetSumToK(n-1,k,arr);
	bool take=false;
	if(k>=arr[n]){
		take=subsetSumToK(n-1,k-arr[n],arr);
	}
	return take || nottake;
}
//Memorization
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
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
	return subsetSumTo(n,k,arr,dp);
}
