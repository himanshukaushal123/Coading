#include <iostream>
using namespace std;
// We check until "root of N" if that number of divisior having in this range
// beacuse divisiors are occuring in pair eg 36-2,3,4,6,9,12,18 if you have 2 then you
// also have 18 and so on. o(N.sqrt(N))
bool prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
// Create a array that contains Prime number
// mark multiple of 2 as not prime then move to
// the the next number and see weather given number is mark or
// not if not marked then marked the multiple of that number and so on
// time complexity (N/2+N/3+N/5+N/7+...)=O(NLogLogN)=Approxmitly in o(1) i.e liner

void primeSeive(int *a)
{
    // mark all odd numbers as prime
    for (int i = 3; i < 100000; i += 2)
    {
        a[i] = 1;
    }
    // seive
    for (int i = 3; i <= 100000; i += 2)
    {
        if (a[i] == 1)
            // mark all the multiple of i as not prime
            for (long long j = /*2 * i*/ i * i; j <= 100000; j += i)
            {
                a[j] = 0;
            }
    }
    // special case
    a[2] = 1;
    a[1] = a[1] = 0;
}

int main()
{
    int a[100005] = {0};
    primeSeive(a);
int start,end;
cin>>start>>end;
    for (int i = start; i <= end; i++)
    {
       cout<< i<<" ";
    }
    return 0;
}
