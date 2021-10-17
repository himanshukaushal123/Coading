#include <iostream>
#include <algorithm>
using namespace std;
int binary_Search(int a[], int start, int end, int k)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == k)
        {
            return mid;
        }
        else if (a[mid] > k)
        {
            end = mid - 1;
        }
        else if (a[mid] < k)
        {
            start = mid + 1;
        }
    }
    return 0;
}
int main()
{
    ;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int start = 0, end = 1;
    int k = 7;
    while (k > a[end])
    {
        start = end;
        end = end * 2;
    }
    int ans = binary_Search(a, start, end, k);
    cout << "Index of "<<k<<" is: "<<ans;
}