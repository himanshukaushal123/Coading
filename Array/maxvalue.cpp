#include <iostream>
using namespace std;
long long int max(long long int arr[], long long int n)
{
    long long int max = -100000000;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   long long int ans = max(a, n);
    cout << ans;
}