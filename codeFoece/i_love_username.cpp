#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
int main()
{
    int n, no, count = 0;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        vec.push_back(no);
        sort(vec.begin(), vec.end());
        if (no == *(vec.end() - 1))
        {
            cout << no<<endl;
            count++;
        }
    }
    cout << count-1;
}