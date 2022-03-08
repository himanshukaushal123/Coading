class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int i=0,j=0,n=s.size();
        string s1="";
        map<string,int>mp;
        vector<string>vec;
        while(j<=n){
            s1+=s[j];
            // if(j-i+1<10){
            //     j++;
            // }
             if(j-i+1==10){
                cout<<s1<<endl;
                mp[s1]++;
                s1.erase(0,1);
                cout<<"After "<<s1<<endl;
                i++;
                // j++;
            }
            j++;
        }
        for(auto x:mp){
            if(x.second>=2){
                vec.push_back(x.first);
            }
        }
        return vec;
    }
};
