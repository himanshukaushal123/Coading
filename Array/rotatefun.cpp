#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={10,20,30,40,50};
    rotate(a,a+2,a+5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    rotate(a,(a+5)-2,a+5);
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}