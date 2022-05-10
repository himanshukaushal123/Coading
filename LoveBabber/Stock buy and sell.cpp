vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
      vector<vector<int>>profit;
     for(int i=1; i<n; i++) {
            if(A[i] > A[i-1]) {
                profit.push_back({i-1, i});
            }
      }
      return profit;
    }
};
