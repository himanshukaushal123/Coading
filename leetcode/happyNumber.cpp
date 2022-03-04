class Solution {
public:
    bool isHappy(int n) {
        string s=to_string(n);
        set<int>se;
        while(true){
            int sum=0;
            for(int i=0;i<s.size();i++){
              sum=sum+(s[i]-'0')*(s[i]-'0');  
            }
            if(sum==1){
                return true;
            }
            else if(find(se.begin(),se.end(),sum)!=se.end()){
                       return false;
            }
            se.insert(sum);
            s=to_string(sum);
        }
       return false;
    }
};