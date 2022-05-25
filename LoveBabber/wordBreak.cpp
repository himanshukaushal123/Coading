 int wordBreak(string A, vector<string> &B) {
        //code here
        int dp[A.size()]={0};
        for(int i=0;i<A.size();i++){
            for(int j=0;j<=i;j++){
                string tocheck=A.substr(j,i+1);
                if(find(B.begin(),B.end(),tocheck)!=B.end()){
                    // cout<<tocheck<<endl;
                    if(j>0){
                        dp[i]=1;
                    }else{
                        dp[i]=1;
                    }
                }
            }
        }
        return dp[A.size()-1]>0;
        
    }
