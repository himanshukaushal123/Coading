#include<iostream>
#include<string>
using namespace std;
void solve(string &in,string &op){
    if(in.length()==0) {
        cout<<"1"<<op<<endl; 
        return;
    }
        string op1=op;
        string op2=op;
        op1.push_back(in[0]);
        // cout<<op1<<" ";
        in.erase(in.begin());
        // cout<<in<<" ";
        solve(in,op1);
        solve(in,op2);
        return;
} 
int main(){
    string in="ab";
    string op="";
    solve(in,op);
    return 0;
}
