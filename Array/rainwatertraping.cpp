#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 1, 2, 4, 0, 1, 3, 2};
    int len = sizeof(a) / sizeof(int);
    int left[len], right[len];
    left[0] = a[0];
    right[len - 1] = a[len - 1];
    for (int i = 1; i < len; i++)
    {
        left[i] = max(a[i], left[i - 1]);
    }
    for (int i = len - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }
    int water = 0;
    for (int i = 0; i < len; i++)
    {
        water += (min(left[i], right[i]) - a[i]);
    }
    cout << water;
}