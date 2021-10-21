#include <iostream>
using namespace std;
int val1=0;
int unique(int val)
{
    val1=val ^ val1;
    return val1;
}
int main()
{
    int n, val, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        ans = unique(val);
    }
    cout << ans;
}