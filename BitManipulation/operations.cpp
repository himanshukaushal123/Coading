#include <iostream>
using namespace std;
// check even
bool isEven(int n)
{
    if (!(n & 1))
    {
        return true;
    }
    return false;
}
// get ith bit
int getbit(int n, int i)
{
    int bit = (n & (1 << i)) > 0 ? 1 : 0;
    return bit;
}
// make 0->1
int setbit(int &n, int i)
{ // update kr rhe h isliye &n liye
    int mask = (1 << i);
    return (n | mask);
}
// clearbit 1->0
int clearbit(int &n, int i)
{
    int mask = ~(1 << i);
    return (n & mask);
}
// update bit
void updatebit(int &n, int i, int v)
{
    if (v == 1)
    {
        cout << "\n"
             << setbit(n, i);
    }
    else if (v == 0)
    {
        cout << "\n"
             << clearbit(n, i);
    }
    else
        cout << "\nNot possible";
}
// clear last ith bits
int clearIBits(int n, int i)
{
    int mask = (-1 << i);
    return (n & mask);
}
// clear  i to j bits
int clearItoJBits(int n, int i, int j)
{
    // int ans = n;
    // for (int k = j; k <= i; k++)
    // {
    //     ans = clearbit(ans, k);
    // }
    // return ans;

    int mask1 = (-1 << (j + 1));
    int mask3 = (1 << i) - 1;
    int finalmask = (mask1 | mask3) return finalmask;
}
// driver
int main()
{
    int n;
    cin >> n;
    bool ans = isEven(n);
    if (ans)
    {
        cout << "Even number";
    }
    else
        cout << "Odd number";
    int ans1 = getbit(n, 2);
    cout << "\n"
         << ans1;
    int ans2 = setbit(n, 1);
    cout << "\n"
         << ans2;
    int ans3 = clearbit(n, 0);
    cout << "\n"
         << ans3;
    updatebit(n, 2, 0);
    int ans4 = clearIBits(n, 2);
    cout << "\n"
         << ans4;

    int ans5 = clearItoJBits(n, 3, 1);
    cout << "\n"
         << ans5;
    return 0;
}