class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>mp;
        vector<string>vec;
        int ans=INT_MAX;
        for(int i=0;i<list1.size();i++){
            mp[list1[i]]=i;
        }
        for(int i=0;i<list2.size();i++){
            if(mp.find(list2[i])!=mp.end()){
              mp[list2[i]]+=i;
              ans=min(ans,mp[list2[i]]);
            }
        }
        for(auto x:mp){
            if(x.second==ans){
                if(find(list1.begin(),list1.end(),x.first)!=list1.end()&&find(list2.begin(),list2.end(),x.first)!=list2.end())
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};
