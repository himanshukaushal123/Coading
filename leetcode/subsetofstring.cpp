#include<string>
#include<algorithm>
using namespace std;
void solve(string in,string op){
    if(in.length()==0) {
        cout<<"1"<<op<<endl; 
        return;
    }
    solve(in.substr(1),op+in[0]);
    solve(in.substr(1),op);
    return;
} 
int main(){
    string in="abc";
    string op="";
    solve(in,op);
    return 0;
}
