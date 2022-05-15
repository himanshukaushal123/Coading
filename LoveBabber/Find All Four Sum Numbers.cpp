 vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>>res;
        if(arr.size()==0)return res;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target=k-(arr[i]+arr[j]);
                int left=j+1;
                int right=n-1;
                while(left<right){
                    int sum=arr[left]+arr[right];
                    if(sum<target)left++;
                    else if(sum>target)right--;
                    else{
                        vector<int>vec(4,0);
                        vec[0]=arr[i];
                        vec[1]=arr[j];
                        vec[2]=arr[left];
                        vec[3]=arr[right];
                        // vec[4]='$'-'0';
                        res.push_back(vec);
                        while(left<right && arr[left]==vec[2])++left;
                        while(left<right && arr[right]==vec[3])--right;
                    }
                }
                while(j+1<n && arr[j+1]==arr[j])++j;
            }
            while(i+1<n&& arr[i+1]==arr[i])++i;
        }
        return res;
    }
