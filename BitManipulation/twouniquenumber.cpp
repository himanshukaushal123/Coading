#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int no, n, ans = 0, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        a[i] = no;
        ans = ans ^ no;
    }
    int pos = 0, temp = ans;
    while (temp != 0)
    {
        if (temp & 1)
        {
            int First_setbit_at = pos;
            break; 
        }
        pos++;
        temp = temp >> 1;
    }

    // the first bit in res is at 'pos'

    // create mask
    int mask = (1 << pos);
    int x = 0;
    int y = 0;
    // find those number which contain set bt at pos
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & mask) > 0)
        {
            x = x ^ a[i];
        }
    }
    y = ans ^ x;

    cout <<min(x,y) << " " <<max(x,y);
    return 0;
}