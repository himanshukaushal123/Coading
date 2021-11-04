#include <iostream>
using namespace std;

void incresing_order(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        incresing_order(n - 1);
        cout << n;
    }
}

void decrease_order(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        cout << n;
        decrease_order(n - 1);
    }
}
int main()
{
    int n = 5;
    incresing_order(n);
    cout << endl;
    decrease_order(n);
    return 0;
}