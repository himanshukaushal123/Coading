#include<iostream>
using namespace std;
#include<string>
int solve(int i,int j,string s,char ch[6][6],int size,int indx){
    int found=0;
    if(i>=0 && j>=0 && i<6 && j<6 &&s[indx]==ch[i][j]){
        int temp=s[indx];
        ch[i][j]=0;
        indx+=1;
        if(indx==size){
            found=1;
        }
        else{
            found+=solve(i+1,j,s,ch,size,indx);
            found+=solve(i-1,j,s,ch,size,indx);
            found+=solve(i,j+1,s,ch,size,indx);
            found+=solve(i,j-1,s,ch,size,indx);
        }
        ch[i][j]=temp;
    }
    return found;
}
int main(){
    string str="GEEKS";
    char ch[6][6]={
        {'D','D','D','G','D','D'},
        {'B','B','D','E','B','S'},
        {'B','S','K','E','B','K'},
        {'D','D','D','D','D','E'},
        {'D','D','D','D','D','E'},
        {'D','D','D','D','D','G'}
    };
    int ans=0,size=5;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            ans+=solve(i,j,str,ch,size,0);
        }
    }

    cout<<ans;
    return 0;
}
