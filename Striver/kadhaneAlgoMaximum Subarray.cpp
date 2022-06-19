 int maxSubArray(vector<int>& nums) {
        int CurrSum=nums[0],Osum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(CurrSum>0){
                CurrSum+=nums[i];
            }else{
                CurrSum=nums[i];
            }
            if(CurrSum>Osum){
                Osum=CurrSum;
            }
        }

        return Osum;
    }
};
