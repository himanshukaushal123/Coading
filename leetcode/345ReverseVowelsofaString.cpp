class Solution {
public:
    bool isVowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        string ch;
        while(i<j){
        while(i<j && isVowel(s[i])==false){
            i++;
        }
        while(i<j && isVowel(s[j])==false){
            j--;
        }
        swap(s[i],s[j]);
            i++;
            j--;
            
        }
        return s;
    }
};
