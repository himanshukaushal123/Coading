#include<bits/stdc++.h>
using namespace std;
long long t,n,g,b,a; 
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a<b)swap(a,b);
		g=a-b;//It will give max gcd because  GCD(x,y)≤min(x,y) 
		if(g==0)b=0;
		else b=min(b%g,g-b%g);
		cout<<g<<' '<<b<<endl;
	}
	return 0;
}