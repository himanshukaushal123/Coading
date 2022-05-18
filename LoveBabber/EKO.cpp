#include<iostream>
#include<algorithm>
using namespace std;

bool solve(long long int mid,long long int arr[],long long int n,long long int m){
    long long int wood=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=mid){
            wood+=(arr[i]-mid);
        }
    }
    return wood>=m;
}
int main(){
 long long int i=0,j=1e7;
 long long int arr[]={4,42,40,26,46};
 long long int n=5;
 long long int m=20;
 sort(arr,arr+n);
 while(i<j){
     long long int mid=(i+j)/2;
     if(solve(mid,arr,n,m)){
         i=mid;
     }else{
         j=mid-1;
     }
 }
 if(solve(j,arr,n,m))cout<<j;
 else cout<<i;   
}
