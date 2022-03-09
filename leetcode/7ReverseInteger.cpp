class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
        if(s[0]=='-'){
            for(int i=1;i<s.size()-1;i++){
                  int j=s.size()-1-i;
                 if(i<=j)
                swap(s[i],s[s.size()-i]);
            }
        }else{
             for(int i=0;i<s.size()-1;i++){
                 int j=s.size()-1-i;
                 if(i<=j)
                swap(s[i],s[s.size()-1-i]);
            }
        }
        if(stol(s)>INT_MAX || stol(s)<INT_MIN) return 0;
        return stol(s);
    }
};
