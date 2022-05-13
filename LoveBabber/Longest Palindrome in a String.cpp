string longestPalin (string S){
       int n = S.size();
       int dp[n][n];
       memset(dp,0,sizeof(dp));
       string str;
       for(int i=0;i<n;i++){
           for(int j=0;j<=i;j++){
               if((dp[j+1][i-1]==1 && S[j]==S[i])||(i==j) ||(i-j==1 && S[i]==S[j])){
                   dp[j][i]=1;
                   if(str.size()<i-j+1)
                       str = S.substr(j,i-j+1);
               }else
                   dp[j][i]=0;
               
           }
       }
       return str;
   }
