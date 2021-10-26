//Concept-Find prime Factor then apply P&C for powers.. eg-2^5*3^1 so all the divisors are (5+1)*(3+1) i.e 5c1*3c1
#include <iostream>
using namespace std;
#include <vector>

void primeFactor(int n)
{
    int cnt;
    vector<pair<int, int>> factors;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n = n / i;
            }
            factors.push_back(make_pair(i, cnt));
        }
    }
    if (n != 1)
    {
        factors.push_back(make_pair(n, 1));
    }
    int ans = 1;
    for (auto elm : factors)
    {
        ans = ans *(elm.second + 1);
    }
    cout<<ans;
}
int main()
{
    primeFactor(24);
    return 0;
}

