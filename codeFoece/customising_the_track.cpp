/*https://codeforces.com/problemset/problem/1543/B*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        sum = sum % n;
        int zeros = n - sum;
        cout << zeros * sum<<endl;;
    }
}