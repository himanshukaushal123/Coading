string duplicate(string s){
    string str;
    unordered_map<char,int>mp;
    for(auto i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            str=str+s[i];
        }
        else mp[s[i]]++;
    }
    return str;
}
