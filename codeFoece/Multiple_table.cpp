#include <iostream>
using namespace std;

int main()
{
    int n, x, count = 0;
    cin >> n >> x;
    int i, j, res;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            res = x / i;
            if (res <= n)
            {
                count++;
              
            }
        }
    }
    cout << count;
}