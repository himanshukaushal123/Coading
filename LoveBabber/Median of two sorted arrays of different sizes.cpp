#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec;
    int ar1[] = {2, 3, 5, 8};
    int ar2[] = {10, 12, 14, 16, 18, 20};
    int n=4,m=6;
    int i=0,j=0;
    // cout<<"1"<<endl;
    while(i<n&&j<m){
       if(ar1[i]>ar2[j]){
           cout<<"aao"<<endl;
           while(ar1[i]>ar2[j]&&j<m){vec.push_back(ar2[j]);j++;}
       }
    //   cout<<"2"<<endl;
       if(ar1[i]<ar2[j]){
           while(ar1[i]<ar2[j]&&i<n){vec.push_back(ar1[i]);i++;}
       }
    //   cout<<"3"<<endl;
       if(ar1[i]==ar2[j]&&i<n&&j<m){
        //   cout<<ar1[i]<<endl;
        //   cout<<ar2[j]<<endl;
           vec.push_back(ar1[i]);
           vec.push_back(ar1[i]);
           i++;
           j++;
       }
    }
    
    if(i<n){
        while(i<n){
        vec.push_back(ar1[i]);
        i++;
    }
    }
    //  cout<<"after i"<<endl;
    //  for(auto x:vec){
    //     cout<<x<<" ";
    // }
    cout<<endl;
    if(j<m){
        while(j<m){
            // cout<<ar2[j]<<" "<<j<<endl;
        vec.push_back(ar2[j]);
        j++;
        }
    }
    // cout<<"after j"<<endl;
    // for(auto x:vec){
    //     cout<<x<<" ";
    // }
    int g=vec.size();
    if(g%2!=0)cout<<vec[g/2];
    else cout<<(vec[g/2]+vec[(g/2)-1])/2;
}
