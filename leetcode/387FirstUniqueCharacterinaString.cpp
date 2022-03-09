class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,vector<int>>mp;
        int ans=INT_MAX;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        for(auto x:mp){
            if(x.second.size()==1){
                ans=min(ans,x.second[0]);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};
