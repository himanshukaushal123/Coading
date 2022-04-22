//1st method
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

//2nd method
class Solution {
public:
    //Tortise Method
    int findDuplicate(vector<int>& nums) {
      int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;  
    }
};
