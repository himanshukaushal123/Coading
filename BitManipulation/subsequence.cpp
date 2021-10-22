#include <iostream>
#include<string>
using namespace std;

void filter_Charcter(int n, string a)
{
    int j = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            cout << a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}

void printSubset(string a)
{
    int n = a.length();
    for (int i = 0; i < (1 << n); i++)
    {
        filter_Charcter(i, a);
    }
}

int main(){
    string a;
    cin>>a;
    printSubset(a);
    return 0;
}