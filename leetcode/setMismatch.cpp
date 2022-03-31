class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vec(1000001,0);
        int missing=1;
        int dup=-1;
        for(int i=0;i<nums.size();i++){
            vec[nums[i]]+=1;
        }
        for(int i=1;i<=nums.size();i++){
            if(vec[i]==0){
                missing=i;
            }
            else if(vec[i]==2){
                dup=i;
            }
        }
        return {dup,missing};
    }
};
