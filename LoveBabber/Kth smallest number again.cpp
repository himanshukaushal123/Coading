#include<iostream>
#include<vector>
#include <queue>
using namespace std;
vector<int> solve(int arr1[],int arr2[],int n,int m){
    vector<int>vec;
    priority_queue<int>pq;
    for(int i=0;i<m;i++){
        if(arr2[i]>m)vec.push_back(-1);
        else{
        for(int j=0;j<n;j++){
            pq.push(arr1[j]);
            if(pq.size()>arr2[i])pq.pop();
        }
        vec.push_back(pq.top());
        pq= priority_queue <int>();
        }
    }
    return vec;
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,3,6};
    vector<int> ans;
    ans=solve(arr1,arr2,5,3);
    for(auto x:ans){
        cout<<x<<" ";
    }
}
