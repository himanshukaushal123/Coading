int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int count=1;
      set<int>s(arr,arr+N);
      vector<int>vec;
      for(auto x:s){
          vec.push_back(x);
      }
      int ans=0;
      for(int i=1;i<vec.size();i++){
          if(vec[i]-vec[i-1]==1){count++;
          }
          else{
              ans=max(ans,count);
              count=1;
          }
      }
      ans=max(ans,count);
      return ans;
    }
