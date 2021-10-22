#include <iostream>
using namespace std;
#include <string>

int main()
{
    int n;
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        if (rem > 5 =)
        {
            if (rem == 9 && (num / 10) == 0)
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
}