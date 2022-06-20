 int findDuplicate(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;){
            if(arr[i]-1==i){
                i++;
            }else{
                if(arr[i]==arr[arr[i]-1])return arr[i];
                else{
                    swap(arr[i],arr[arr[i]-1]);
                }
            }
        }
        return 0;
    }
