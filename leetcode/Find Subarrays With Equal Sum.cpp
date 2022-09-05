class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size();
      int j=0,i=0;
        while(j<n){
            if(j-i+1<2){
                j++;
            }
            else if((j-i+1)==2){
                mp[nums[i]+nums[j]]++;
                i++;j++;
            }
        }
        for(auto x:mp){
            if(x.second>=2)return true;
        }
        return false;
    }
};
