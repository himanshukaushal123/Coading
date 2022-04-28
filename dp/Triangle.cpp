//recursion 
int solve(vector<vector<int>>& triangle, int n,int i,int j){
	if(i==n-1)return triangle[i][j];
	int d=triangle[i][j]+solve(triangle,n,i+1,j);
	int dg=triangle[i][j]+solve(triangle,n,i+1,j+1);
	return min(d,dg);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	return solve(triangle,n,0,0);
}
//memorization
int solve(vector<vector<int>>& triangle, int n,int i,int j,vector<vector<int>>&dp){
	if(i==n-1)return triangle[i][j];
	if(dp[i][j]!=-1)return dp[i][j];
	int d=triangle[i][j]+solve(triangle,n,i+1,j,dp);
	int dg=triangle[i][j]+solve(triangle,n,i+1,j+1,dp);
	return dp[i][j]=min(d,dg);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	int m=triangle[n-1].size();
	vector<vector<int>>dp(n,vector<int>(m+1,-1));
	return solve(triangle,n,0,0,dp);
}
