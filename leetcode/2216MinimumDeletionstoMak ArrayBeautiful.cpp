class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(((i-1)-ans)%2==0 && nums[i]==nums[i-1] ){
                ans++;
            }
            //12233
        }
        //12233 but size is odd so we have to remove one but from end not from middle because if we remove from middle it will affect the index of other element.
        if((nums.size()-ans)%2){
            ans++;
        }
        return ans;
    }
};
