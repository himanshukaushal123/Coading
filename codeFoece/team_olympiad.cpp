/*https://codeforces.com/problemset/problem/490/A*/
#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    vector<int> v1,v2,v3;
    int n,no;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>no;
        if(no==1){
            v1.push_back(i);
        }else if(no==2){
            v2.push_back(i);
        }else if(no==3){
            v3.push_back(i);
        }
    }
    set<int>s;
    s.insert(v1.size());
    s.insert(v2.size());
    s.insert(v3.size());
    cout<<*s.begin()<<endl;
    
    for(int i=0;i<*s.begin();i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }


}
