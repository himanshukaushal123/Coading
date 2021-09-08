/*https://codeforces.com/problemset/problem/1543/B*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       long long int n, sum = 0;
        cin >> n;
       long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        sum = sum % n;
        long long int zeros = n - sum;
        cout << zeros * sum<<endl;;
    }
}