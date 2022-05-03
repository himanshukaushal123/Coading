class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l = nums.size(), r = 0;
        vector<int>num(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
                if(num[i]!=nums[i]){
                    r=max(r,i);
                    l=min(l,i);
                }
            }
        return r-l<0?0:r-l+1;
    }
};
