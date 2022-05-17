#include<iostream>
#include<vector>
using namespace std;
bool canPlace(int dis,int arr[],int cow,int n){
    int cord=arr[0],count=1;
    for(int i=1;i<n;i++){
        if(arr[i]-cord>=dis){
            count++;
            cord=arr[i];
        }
        if(count==cow)return true;
    }
    return false;
}
int main(){
    int cow=3,ans=-1;
    int arr[]={1,2,4,8,9};
    int n=5;
    int i=0,j=arr[n-1]-arr[0];
    while(i<=j){
        int mid=(i+j)>>1;
        if(canPlace(mid,arr,cow,n)){
            ans=mid;
            i=mid+1;
        }else{
            j=mid-1;
        }
    }
    cout<<ans;
}
