#include <iostream>
#include <math.h>
using namespace std;
int decimal_to_binary(int n)
{
    int ans = 0,i=0;
    while (n != 0)
    {
        ans += (n & 1) * pow(10, i);
        n = n >> 1;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = decimal_to_binary(n);
    cout << ans;
}