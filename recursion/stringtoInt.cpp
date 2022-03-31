#include <iostream>
#include<string>
using namespace std;
int solve(string s,int n){
    if(n==0){
        return 0;
    }
    int digit=s[n-1]-'0';
    int small=solve(s,n-1);
    return small*10+digit;
}

int main()
{
    string s="1234";
    int n=s.size();
    cout<<solve(s,n);
    return 0;
}
