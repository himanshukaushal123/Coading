class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char arr_s[256]={0};
        char arr_t[256]={0};
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(arr_s[s[i]]!=arr_t[t[i]]) return false;
            arr_s[s[i]]=i+1;            
            arr_t[t[i]]=i+1;
        }
        return true;
    }
};