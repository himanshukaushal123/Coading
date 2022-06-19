 vector<vector<int>> generate(int numRows) {
        vector<int>vec;
        vector<vector<int>>ans;
        if(numRows==1){vec.push_back(1);ans.push_back(vec);return ans;}
        vec.push_back(1);
        ans.push_back(vec);
        vec.clear();
        vec.push_back(1);
        vec.push_back(1);
        ans.push_back(vec);
        vec.clear();
         for(int i=3;i<=numRows;i++){
             vector<int>vec(i);
             vec[0]=1;
             vec[i-1]=1;
             int k=0;
             for(int j=1;j<i-1;j++){
                 vec[j]=ans[i-2][k]+ans[i-2][k+1];
                 k++;
             }
             ans.push_back(vec);
             vec.clear();
         }
        return ans;   
    }
