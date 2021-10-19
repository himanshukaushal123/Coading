#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

bool can_read(int arr[], int n, int key, int stu)
{
    int count = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum > key)
        {
            count++;
        }
    }
    if (count == stu)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int a[] = {10, 20, 30, 40}, ans = 0, res = 0;
    int stu = 3;
    int n = sizeof(a) / sizeof(int);
    int s = *min_element(a, a + n);
    int e = accumulate(a, a + n, 0);
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        bool res = can_read(a, n, mid, stu);
        if (res)
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    cout << ans;
}