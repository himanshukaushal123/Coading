/*https://codeforces.com/problemset/problem/1335/A*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, no, q;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        q = no / 2;
        if (no % 2 == 0)
        {
            vec.push_back(q - 1);
        }
        else
        {
            vec.push_back(q);
        }
    }
    for (auto elm : vec)
    {
        cout << elm << endl;
    }
}