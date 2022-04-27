//recursion TC(2^(N+M))
int solve(int m,int n){
	if(m==0&&n==0) return 1;
	if(m<0 || n<0)return 0;
	int up=solve(m-1,n);
	int left=solve(m,n-1);
	return up+left;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	return solve(m-1,n-1);
}
//memorization TC(N*2)
int solve(int m,int n,vector<vector<int>>&dp){
	if(m==0&&n==0) return 1;
	if(m<0 || n<0)return 0;
	if(dp[m][n]!=-1)return dp[m][n];
	int up=solve(m-1,n,dp);
	int left=solve(m,n-1,dp);
	return dp[m][n]=up+left;
}
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<vector<int>>dp(m,vector<int>(n+1,-1));
	return solve(m-1,n-1,dp);
}
//tabulation
