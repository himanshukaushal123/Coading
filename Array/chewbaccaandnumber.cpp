#include <iostream>
using namespace std;
#include <string>

int main()
{
    long long int n,ans=0,mult=1;
    cin >> n;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem >= 5 )
        {
            if (rem == 9 && (n / 10) == 0)
            {
            }
            else
            {
                rem = 9 - rem;
            }
        }
        ans += rem * mult;
        mult *= 10;
        n /= 10;
    }
    cout << ans;
}
