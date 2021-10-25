#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n=3;
        int a[3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0, j = 1;
        for (int i = 0; i < n; i++)
        {
            sum = sum + j * a[i];
            j++;
        }
        if (sum % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
            cout << "1" << endl;
    }
    return 0;
}