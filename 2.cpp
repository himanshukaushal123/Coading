/*Find the max and min element*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> vec, vec1;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    cout << "The maximum number is: " << *max_element(vec.begin(), vec.end());
}