class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
       unordered_map<string,int>mp;
       for(auto i:paths){
           mp[i[0]]+=1;
           mp[i[1]]+=0;
       }
        for(auto [v,k]:mp){
            if(k==0){
                return v;
            }
        }
        return " ";
    }
};
