  int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        //when k=0
        int ans=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            int maxa=max(arr[i-1]+k,arr[n-1]-k);
            int mina=min(arr[0]+k,arr[i]-k);
            if(mina<0)continue;
            ans=min(ans,maxa-mina);
        }
        return ans;
    }
