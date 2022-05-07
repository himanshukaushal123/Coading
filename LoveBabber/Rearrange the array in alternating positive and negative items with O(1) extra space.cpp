#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>&vec,int from,int to){
    int temp=vec[to];
    for(int i=to;i>from;i--){
        vec[i]=vec[i-1];
    }
    vec[from]=temp;
}
int main(){
    vector<int>vec{1,2,3,-4,-1,4};
    int n=6;
    int i=0;
    while(i<n){
        if(i%2==0 && vec[i]>0){
              int from=i,j=i;
              cout<<from<<" ";
              while(vec[j]>0 &&j<n)j++;
              int to=j;
              cout<<to<<endl;
              if(j!=n)
              rotate(vec,from,to);
              i++;
              i++;
        }else  if(i%2!=0 && vec[i]<0){
              int from=i,j=i;
              while(vec[j]<0 &&j<n)j++;
              int to=j;
              rotate(vec,from,to);
              i++;
              i++;
        }else{
            i++;
        }
    }
    for(auto x:vec){
        cout<<x<<" ";
    }
    return 0;
}
