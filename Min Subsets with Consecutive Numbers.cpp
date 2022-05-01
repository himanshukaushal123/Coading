int numofsubset(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        int count=1;
        for(int i=n-1;i>=1;i--){
            if(arr[i-1]!=arr[i]-1){
                count++;
            }
        }
        return count;
    }
