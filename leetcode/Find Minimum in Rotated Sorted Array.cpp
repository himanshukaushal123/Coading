class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(mid==0){
                if(nums.size()!=1){
                if(nums[mid]<nums[mid+1])
                return nums[0];
                else return nums[1];
                }else return nums[0];
            }else{
            if(nums[mid]<=nums[end]){
                if(nums[mid]<nums[mid-1])
                return nums[mid];
                end=mid-1;
            }else{
                start=mid+1;
                
            }
        }
        }
        return 0;
    }
};
