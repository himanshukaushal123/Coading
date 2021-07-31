/*Move all the negative elements to one side*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
int n;
    vector<int> vec{-1,2,3-8,-7,-5,5,6,7};
    sort(vec.begin(),vec.end());
    for(auto elm:vec){
        cout<<elm<<" ";
    }
}