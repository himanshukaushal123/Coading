bool areRotations(string s1,string s2){
    if(s1.size()!=s2.size())return false;
    int i=0;
    while(s2[i]!=s1[0])i++;
    for(auto it:s1){
        if(it!=s2[i%s2.size()]){
            return false;
        }
        return true;
    }
}
