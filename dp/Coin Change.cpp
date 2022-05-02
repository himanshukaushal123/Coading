//
 long long int count(int coins[], int n, int amount) {

        // code here.
         long long int dp[n+1][amount+1];
          for(int i=0;i<n+1;i++){
              for(int j=0;j<amount+1;j++){
                  if(i==0)dp[i][j]=0;
                  else if(j==0)dp[i][j]=1;
                  else{
                      if(coins[i-1]<=j){
                         dp[i][j] = dp[i - 1][j]+dp[i][j - coins[i - 1]];
                      }else{
                          dp[i][j] = dp[i - 1][j];
                      }
                  }
              }
          }
          return dp[n][amount];
      
    }
///
long long int getMaxNumberOfWays(int coins[], int n, int sum) {
	long long int t[n + 1][sum + 1];
	// initialization
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0)
				t[i][j] = 0;
			if (j == 0)
				t[i][j] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= sum; j++)
			if (coins[i - 1] <= j)
				t[i][j] = t[i - 1][j] + t[i][j - coins[i - 1]];
			else
				t[i][j] = t[i - 1][j];

	return t[n][sum];
}
    long long int count(int S[], int m, int n) {

        // code here.
        return getMaxNumberOfWays(S, m, n);
      
    }
