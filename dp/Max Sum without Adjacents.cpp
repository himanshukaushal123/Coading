//recursion
class Solution{
public:	
int solve(int *arr,int n){
    if(n==0){
	        return arr[n];
	    }
	    if(n<0){
	        return 0;
	    }
	 int pick=arr[n]+solve(arr,n-2);
	 int notPick=0+solve(arr,n-1);
	 return max(pick,notPick);
}
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	   return solve(arr,n-1);
	}
};
//memoration
class Solution{
public:	
int solve(int *arr,int n,vector<int>&dp){
    if(n==0){
	        return arr[n];
	    }
	    if(n<0){
	        return 0;
	    }
	    if(dp[n]!=-1){
	        return dp[n];
	    }
	 int pick=arr[n]+solve(arr,n-2,dp);
	 int notPick=0+solve(arr,n-1,dp);
	 return dp[n]=max(pick,notPick);
}
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    int sum=0;
	    vector<int>dp(n+1,-1);
	   return solve(arr,n-1,dp);
	}
};
