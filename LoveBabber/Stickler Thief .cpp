 int  solve(int ind,int arr[],int n,vector<int>&dp){
        if(ind>=n)return 0;
        //taken
        if(dp[ind]!=-1)return dp[ind];
        int take=arr[ind]+solve(ind+2,arr,n,dp);
        int nottake=solve(ind+1,arr,n,dp);
        return dp[ind]=max(take,nottake);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>dp(n,-1);
        return solve(0,arr,n,dp);
    }
