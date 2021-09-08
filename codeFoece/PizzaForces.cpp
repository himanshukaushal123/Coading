#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    // if(n%2==0)
    // {
    //     cout<<max(6LL,n)*2.5<<"\n";
    // }else{
    //     cout<<max(6LL,n+1)*2.5<<"\n";
    // }
     cout << max(6LL, n + 1) / 2 * 5 << '\n';
  }
}