/*https://codeforces.com/problemset/problem/732/A*/

#include<iostream> 
using namespace std;

int main()
{
    int cost, r, i = 1;
    cin >> cost >> r;
    while (cost * i % 10 != r && cost * i % 10 != 0)
    {
        i++;
    }
    cout << i << endl;
}