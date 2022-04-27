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
//memorization TC(N*M); SC(O((N-1)+(M-1))+O(M*N)<-DP(TOP-DOWN APPROCH)
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
//tabulation(BOTTOM UP APPROCH) TC O(N*M) SC(N*M)
int uniquePaths(int m, int n) {
	// Write your code here.
	int dp[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0&&j==0)dp[0][0]=1;
			else{
				int left=0,up=0;
				if(i>0)up=dp[i-1][j];
	             if(j>0)left=dp[i][j-1];
	             dp[i][j]=up+left;
			}
		}
	}
	return dp[m-1][n-1];
}
//space optimization
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int>prev(n,0);
	for(int i=0;i<m;i++){
		vector<int>curr(n,0);
		for(int j=0;j<n;j++){
			if(i==0&&j==0)curr[j]=1;
			else{
				int left=0,up=0;
				if(i>0)up=prev[j];
	             if(j>0)left=curr[j-1];
	             curr[j]=up+left;
			}
		}
		prev=curr;
	}
	return prev[n-1];
}
