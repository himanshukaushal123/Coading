class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i);
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            vector<int>v=i->second;
            int n=v.size();
            if(n>1)
            {
                for(int i=0;i<n-1;i++)
                {
                    if(v[i+1]-v[i]<=k)
                        return 1;
                }
            }
        }
        return 0;
    }
};