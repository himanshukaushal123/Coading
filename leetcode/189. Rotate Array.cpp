//Given an array, rotate the array to the right by k steps, where k is non-negative.
 void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k%n);
        int i=k%n;
        reverse(nums.begin()+i,nums.end());
    }
};

//Given an array, rotate the array to the left by k steps, where k is non-negative.
 void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        reverse(nums.begin(),nums.begin()+k%n);
        int i=k%n;
        reverse(nums.begin()+i,nums.end());
        reverse(nums.begin(),nums.end());
    }
};
