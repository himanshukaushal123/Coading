vector<int> nextPermutation(int N, vector<int> nums){
        // code here
        if(nums.size()==0 || nums.size()==1)return nums;
        int i=N-2;
        while(i>=0 && nums[i]>=nums[i+1]) i--;
        if(i>=0){
            int j=N-1;
            while(nums[j]<=nums[i])j--;
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+(i+1),nums.end());
        return nums;
    }
