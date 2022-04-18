class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> vec(100001,-1);
        for(int i=0;i<nums.size();i++){
            if(vec[nums[i]]==-1){
                vec[nums[i]]=0;
            }else if(vec[nums[i]]==0)
                return nums[i];
            }
        return -1;
        
    }
};
