#include <iostream>
using namespace std;
bool can_place(int stalls[], int n, int cow, int min_sep)
{
    int last_cow = stalls[0];
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - last_cow >= min_sep)
        {
            last_cow = stalls[i];
            count++;
            if (count == cow)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int stalls[] = {1, 2, 4, 8, 9}, ans = 0;
    int n = 5;
    int cows = 3;
    int s = 0;
    int e = stalls[n - 1] - stalls[0];
    while (s <= e)
    {
        int mid = (e + s) / 2;
        bool rakhpayen = can_place(stalls, n, cows, mid);
        if (rakhpayen)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    cout << ans;
}