 int lcs(string x,string y,int n,int m, vector<vector<int>>&dp){
      //Base Case
      if(n==0||m==0)dp[n][m]=0;
      if(n==0 && m!=0)dp[n][m]=m;
      if(m==0&& n!=0)dp[n][m]=n;
      
       //memozation
      if(dp[n][m]!=-1) return dp[n][m];
      
      //choice diagram
      if(x[n-1]==y[m-1])return lcs(x,y,n-1,m-1,dp);
      else
      dp[n][m]=1+min(lcs(x,y,n-1,m,dp),min(lcs(x,y,n,m-1,dp),lcs(x,y,n-1,m-1,dp)));//replace or delete or insert
      return dp[n][m];
  }
    int minDistance(string s, string t) {
        // Code here
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return lcs(s,t,n,m,dp);
    }
