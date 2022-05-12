#include<iostream>
#include<string>
using namespace std;
#include<algorithm>

int main(){
    string str1="onetwofour";
    string str2="hellofourtwooneworld";
    if(str1.size()>str2.size()){cout<<"No"; return 0;}
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    int j=0;
    for(int i=0;i<str2.size();i++){
        if(str2[i]==str1[j])j++;
    }
    if(j==str1.size())cout<<"YES";
    else{
        cout<<"No";
    }
    return 0;
}
