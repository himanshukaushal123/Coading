#include <iostream>
using namespace std;
int timessorted(int arr[], int len)
{
    int start = 0, end = len - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int next = (mid + 1) % len;
        int pre = (mid + len - 1) % len;
        if (arr[next] >= arr[mid] && arr[pre] >= arr[mid])
        {
            return mid+1;
        }
        else if (arr[start] <= arr[mid])
        {
            start = mid;
        }
        else if (arr[end] >= arr[mid])
        {
            end = mid;
        }
    }
}
int main()
{
    int arr[] = {10, 11, 12, 15,16, 2, 3, 4};
    int len = sizeof(arr) / sizeof(int);
    int ans = timessorted(arr, len);
    cout << ans;
}