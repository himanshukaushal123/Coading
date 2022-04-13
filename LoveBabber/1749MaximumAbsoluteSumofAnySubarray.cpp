class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        
       long long int sum=0;
       long long int maxi=INT_MIN;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           if(sum>maxi) maxi=sum;
             if(sum<0)sum=0;
           nums[i]=nums[i]*(-1);
       }
       sum=0;
       long long int maxi1=INT_MIN;
       for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           if(sum>maxi1) maxi1=sum;
            if(sum<0)sum=0;
           
       } 
        return max(maxi1,maxi);
    }
};
