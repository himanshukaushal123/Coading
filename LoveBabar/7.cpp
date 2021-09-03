/*Write a program to cyclically rotate an array by one.*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> vec;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    reverse(vec.begin(), vec.end());
    reverse(vec.begin() + 1, vec.end() - 1);

    for (auto elm : vec)
    {
        cout << elm << " ";
    }
}