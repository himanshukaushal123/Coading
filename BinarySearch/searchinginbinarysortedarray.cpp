#include<iostream>
using namespace std;
int first_occurance(int a[], int start, int end, int k)
{
    int res=0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == k)
        {
            res=mid;
            end=mid-1;
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
    return res;
}
int main()
{
    int a[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    int start = 0, end = 1;
    int k = 1;
    while (k > a[end])
    {
        start = end;
        end = end * 2;
    }
    int ans = first_occurance(a, start, end, k);
    cout << "Index of "<<k<<" is: "<<ans;
}