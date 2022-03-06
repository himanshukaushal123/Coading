class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        sort(nums.begin(),nums.end());
        vector<int>vec;
        int curr=1;
        int longlen=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
            if(nums[i-1]+1==nums[i]){
                curr++;
            }
            else {
                longlen=max(longlen,curr);
                curr=1;
            }
        }
        }
        return max(longlen,curr);
    }
};