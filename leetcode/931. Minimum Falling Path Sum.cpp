class Solution {
public:
   int solve(int i,int j,vector<vector<int>> &matrix,vector<vector<int>>&dp){
	if(j<0||j>=matrix[0].size())return 1e9;
	if(i==0)return matrix[0][j];
       if(dp[i][j]!=-1)return dp[i][j];
	int left=matrix[i][j]+solve(i-1,j-1,matrix,dp);
	int right=matrix[i][j]+solve(i-1,j+1,matrix,dp);
	int up=matrix[i][j]+solve(i-1,j,matrix,dp);
	return dp[i][j]=min(left,min(right,up));
}
 int minFallingPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
	int m=matrix.size();
	int n=matrix[0].size();
	int mini=1e9;
     vector<vector<int>>dp(m,vector<int>(n+1,-1));
	for(int j=0;j<n;j++){
		mini=min(mini,solve(m-1,j,matrix,dp));
	}
	return mini;
}
};

