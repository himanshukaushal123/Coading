#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, power, ans = 1, i = 1;
    cin >> n >> power;
    while ((power != 0))
    {
        if (power & 1)
        {
            ans = ans * n;
        }
        n = n * n;
        power = power >> 1;
    }
    cout << ans;
}