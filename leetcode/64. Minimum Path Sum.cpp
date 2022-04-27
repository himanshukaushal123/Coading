class Solution {
public:
int solve(int m,int n,vector<vector<int>> &arr,vector<vector<int>>&dp){
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==0&&j==0)dp[i][j]=arr[i][j];
			else{
				int up=arr[i][j],left=arr[i][j];
				if(i>0)up+=dp[i-1][j];
				else up+=1e9;
				if(j>0)left+=dp[i][j-1];
				else left+=1e9;
				dp[i][j]=min(up,left);
			}
		}
	}
	return dp[m][n];
}
int minPathSum(vector<vector<int>> &grid) {
    // Write your code here.
	int m=grid.size();
	int n=grid[0].size();
 	vector<vector<int>>dp(m,vector<int>(n+1,-1));
	return solve(m-1,n-1,grid,dp);
}
};
//memonization
int solve(int m,int n,vector<vector<int>> &arr,vector<vector<int>>&dp){
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n+1;j++){
			if(i==0&&j==0)dp[i][j]=arr[i][j];
			else{
				int up=arr[i][j],left=arr[i][j];
				if(i>0)up+=dp[i-1][j];
				else up+=1e9;
				if(j>0)left+=dp[i][j-1];
				else left+=1e9;
				dp[i][j]=min(up,left);
			}
		}
	}
	return dp[m][n];
}
int minPathSum(vector<vector<int>> &grid) {
    // Write your code here.
	int m=grid.size();
	int n=grid[0].size();
 	vector<vector<int>>dp(m,vector<int>(n+1,-1));
	return solve(m-1,n-1,grid,dp);
}
