bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           if(sum==0) return true;
           else if(mp.count(sum)>0){
               return true;
           }else{
               mp[sum]=i;
           }
       }
       return false;
    }
