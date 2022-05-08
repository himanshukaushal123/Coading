int minSwap(int arr[], int n, int k) {
        // Complet the function
        if(n==2)return 0;
        int count=0,ans=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<=k)count++;
        }
        int bad=0;
        for(int i=0;i<count;i++){
            if(arr[i]>k)bad++;
        }
        int i=0,j=count;
        ans=bad;
        while(j<n){
            if(arr[j]>k)bad++;
            if(arr[i]>k)bad--;
            ans=min(ans,bad);
            i++;j++;
        }
        return ans;
    }
