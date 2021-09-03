/*https://codeforces.com/problemset/problem/785/A*/

#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
            sum=sum+4;
        }else if(s=="Cube"){
            sum=sum+6;
        }else if(s=="Octahedron"){
            sum=sum+8;
        }else if(s=="Dodecahedron"){
            sum=sum+12;
        }else if(s=="Icosahedron"){
            sum=sum+20;
        }
    }
    cout<<sum;

}