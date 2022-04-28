//recursion

int solve(int i,int j,vector<vector<int>> &matrix){
	if(j<0||j>=matrix[0].size())return -1e9;
	if(i==0)return matrix[0][j];
	int left=matrix[i][j]+solve(i-1,j-1,matrix);
	int right=matrix[i][j]+solve(i-1,j+1,matrix);
	int up=matrix[i][j]+solve(i-1,j,matrix);
	return max(left,max(right,up));
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
	int m=matrix.size();
	int n=matrix[0].size();
	int maxi=-1e8;
	for(int j=0;j<n;j++){
		maxi=max(maxi,solve(m-1,j,matrix));
	}
	return maxi;
}
