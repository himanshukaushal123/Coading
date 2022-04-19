class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        string s="[.]";
         for(int i=0;i<address.size();i++){
             if(address[i]=='.'){
                ans=ans+s;
             }else ans=ans+address[i];
         }
        return ans;
    }
};
