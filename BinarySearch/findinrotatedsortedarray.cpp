#include <iostream>
#include <algorithm>
using namespace std;
int timessorted(int arr[], int len)
{
    int start = 0, end = len - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int next = (mid + 1) % len;
        int pre = (mid + len - 1) % len;
        if (arr[mid] <= arr[mid] && arr[mid] <= arr[pre])
        {
            return mid + 1;
        }
        if (arr[start] <= arr[mid])
        {
            start = mid;
        }
        else if (arr[mid] <= arr[end])
        {
            end = mid;
        }
    }
}

int main()
{
    int arr[] = {10, 11, 12, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = len;
    int ans = timessorted(arr, len);
    cout << ans << endl;
    cout << "Element to be search:";
    int key;
    cin >> key;
    int ans1 = binary_search(arr, arr + ans - 1, key);
    int ans2 = binary_search(arr + ans, arr + len, key);
    if (ans1 == ans2)
    {
        cout << "Not Present";
    }
    else
        cout << "present";
}