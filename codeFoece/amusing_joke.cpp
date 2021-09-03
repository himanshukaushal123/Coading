/*https://codeforces.com/problemset/problem/141/A*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string S1,S2,S,U;
	cin>>S1>>S2>>U;
	S=S1+S2;
	sort(S.begin(),S.end());
	sort(U.begin(),U.end());
	cout<<(!S.compare(U) ? "YES":"NO");
}