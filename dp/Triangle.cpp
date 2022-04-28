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
