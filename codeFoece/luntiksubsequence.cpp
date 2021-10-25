/*
It can be noticed that all subsequences with sum s−1 appear if we erase
some 0-es from the array and also erase exactly one 1. We can 
independently calculate the number of ways to erase some 0-es from the 
array (that way the sum will remain the same), then calculate the number 
of ways to erase exactly one 1 from the array (that way the sum will 
become equal to s−1), and then multiply these two numbers. Therefore, 
the answer is equal to pow(2,c0)⋅c1, where c0 is the number of 0-es in the array,
 and c1 is the number of 1-s.
*/

#include<iostream>
using namespace std;
#include<math.h>
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
         int count1=0,count0=0,n;
        cin>>n;
         int a[n];
        for( int i=0;i<n;i++){
             int no;
            cin>>no;
            if(no==0){
                count0++;
            }
            if(no==1){
                count1++;
            }
        }
        cout<<(1ll<<count0)*(ll)count1<<endl;

    }
    return 0;
}