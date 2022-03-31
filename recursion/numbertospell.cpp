#include <stdio.h>
using namespace std;
#include<iostream>
char digit[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void solve(int n){
    if(n==0){
        return;
    }
    solve(n/10);
    cout<<digit[n%10]<<" ";
}
int main()
{
    
    solve(2048);
    return 0;
}
