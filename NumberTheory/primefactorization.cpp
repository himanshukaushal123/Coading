#include <iostream>
using namespace std;
#include <vector>
vector<int> prime_seive(int *p, int n)
{
    p[1] = p[0] = 0;
    p[2] = 1;
    vector<int> primes;
    for (int i = 3; i <= n; i += 2)
    {
        p[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        if (p[i] == 1)
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                p[j] = 0;
            }
        }
    }
    return primes;
}

vector<int> factorize(int n, vector<int> primes)
{
    vector<int> factors;
    factors.clear();
    int i = 0;
    int p = primes[i];
    while (p * p <= n)
    {
        if (n % p == 0)
        {
            factors.push_back(p);
            while (n % p == 0)
            {
                n = n / p;
            }
        }
        i++;
        p = primes[i];
    }
    if (n != 1)
    {
        factors.push_back(n);
    }
    return factors;
}

int main()
{
    int p[100] = {0};
    vector<int> primes = prime_seive(p, 100);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> factor = factorize(n, primes);
        for (auto elm : factor)
        {
            cout << elm << " ";
        }
    }
    return 0;
}
