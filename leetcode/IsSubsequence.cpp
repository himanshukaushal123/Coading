class Solution {
public:
    bool isSubsequence(string s, string t) {
       int i=0,j=0;
        string s1="";
        int n=s.size();
        int n1=t.size();
        while(i<n&&j<n1){
            if(s[i]==t[j]){
                // s1=s1+s[i];
                i++;
            }
            j++;
        }
        if(i==n){
            return true;
        }else return false;
    }
};