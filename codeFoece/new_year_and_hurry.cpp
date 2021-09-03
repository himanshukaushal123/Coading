/*https://codeforces.com/problemset/problem/750/A*/

#include <iostream>
using namespace std;

int main()
{
    int n, count = 0,t, sum = 240;
    cin >> n>>t;
    for (int i = 1; i <= n; i++)
    {
        sum = sum - 5 * i;
        if (sum < t)
            break;
        count++;
    }
    cout << count;
}