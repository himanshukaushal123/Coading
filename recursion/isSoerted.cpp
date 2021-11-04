#include<iostream>
using namespace std;

bool sortted_array(int a[],int n){
    if(n==1 || n==0){
        return true;
    }
    if(a[0]<a[1] || sortted_array(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);

    if(sortted_array(a,n)){
        cout<<"Sorted";
    }else
    cout<<"Not Sortesd";
    
}