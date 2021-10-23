#include <iostream>
#include<bitset>
using namespace std;
#include <vector>
const int n = 10000000;
bitset<10000005> b;
vector<int> primes;
void seive()
{
    b.set();
 
    b[0] = b[1] = 0;
 
    for (long long int i = 2; i <= n; i++)
    {
        if (b[i] == 1)
        {
            primes.push_back(i);
            for (long long int j = i * i; j <= n; j += i)
            {
                b[j] = 0;
            }
        }
    }
}

bool isPrime(long long int No)
{
    if (No <= n)
    {
        return b[No] == 1 ?true : false;
    }

    for (int i = 0; primes[i] *(long long) primes[i] <= No; i++)
    {
        if (No % primes[i] == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    seive();
    long long int N;
    cin>>N;
    if(isPrime(N)){
        cout<<"Yes it is prime number";
    }else{
        cout<<"No it is not a prime number";
    }
    return 0;
}