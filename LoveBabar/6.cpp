/*intersection & union*/
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    set<int> set1, set2, set4;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        set1.insert(num);
    }
    cout << "\nEnter the value of set 2: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        set2.insert(num);
    }
    set<int> set3;
    merge(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set3, set3.end()));
    cout << "The union of both set is: ";
    for (auto elm : set3)
    {
        cout << elm << " ";
    }
    vector<int> v;
    std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(v));

    cout << "\nThe intersection of both set is:  ";
    for (auto it : v)
        cout << it << " ";
    cout << "\n";
}