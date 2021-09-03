/*Reverse the vector */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> vec,vec1;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    reverse(vec.begin(), vec.end());
    for (auto elm:vec)
    {
        cout << elm<<" ";
    }
}