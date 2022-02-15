class Solution {
public:
    bool isPalin(string s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
    int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return isPalin(s,i+1,j)||isPalin(s,i,j-1);
            }
            i++;
            j--;
        }
        return 1;
        
    }
};