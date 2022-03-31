class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>mp;
        int ans=0;
        for(auto x:nums){
            mp[x]++;
        }
        int n=nums.size();
        nums.clear();
        for(auto x:mp){
            if(x.second>=2){
                nums.push_back(x.first);
                nums.push_back(x.first);
                ans+=2;
            }else{
                nums.push_back(x.first);
                   ans++;
            }
        }
        return ans;
    }
};
