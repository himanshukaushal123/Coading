/*https://codeforces.com/problemset/problem/510/A*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, num, count = 2;
    cin >> n >> num;
    for (int i = 2; i < n + 2; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < num; j++)
            {
                cout << "#";
            }
        }
        else
        {
            if (count % 2 == 0)
            {
                for (int j = 0; j < num - 1; j++)
                {

                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";

                for (int j = 0; j < num - 1; j++)
                {

                    cout << ".";
                }
            }
            count++;
        }
        cout << endl;
    }
}