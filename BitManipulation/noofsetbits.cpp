#include <iostream>
using namespace std;

// 1st method o(logN)
int no_of_Setbits(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans += (n & 1);
        n = n >> 1;
    }
    return ans;
}
// 2nd method O(no.of set bits)
int countSetBitFast(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n = n & (n - 1); // for removing set bits
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int ans = no_of_Setbits(n);
    cout <<"1st method " <<ans;
    int ans1 = countSetBitFast(n);
    cout << endl<<"2nd method " 
         << ans1;

    // 3rd method
    cout << "\n"<<"3rd method " 
         << __builtin_popcount(n);
    return 0;
}