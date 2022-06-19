 void solve(vector<vector<int>>& matrix,int i,int j,int n,int m){
        for(int k=i;k>=0;k--){
            if(matrix[k][j]!=0){
                matrix[k][j]=1000;
            }
            else{
                matrix[k][j]=0;
            }
            
        }
        for(int k=i;k<n;k++){
             if(matrix[k][j]!=0){
                matrix[k][j]=1000;
            }
            else{
                matrix[k][j]=0;
            }
        }
        for(int k=j;k>=0;k--){
            if(matrix[i][k]!=0){
                matrix[i][k]=1000;
            }
            else{
                matrix[i][k]=0;
            }
        }
        for(int k=j;k<m;k++){
            if(matrix[i][k]!=0){
                matrix[i][k]=1000;
            }
            else{
                matrix[i][k]=0;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    solve(matrix,i,j,n,m);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1000){
                    matrix[i][j]=0;
                }
            }
        }
      return;  
    }
