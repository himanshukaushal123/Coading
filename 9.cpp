/*Minimise the maximum difference between heights*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    cout << "Enter the value of k:";
    int k;
    cin >> k;
    vector<int> vec, vec1;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.push_back(num);
    }

    auto it = *max_element(vec.begin(), vec.end())-k;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] + k < it)
        {
            vec[i] = vec[i] + k;
        }
        else
        {
            vec[i] = vec[i] - k;
        }
    }
    for (auto elm : vec)
    {
        cout << elm << " ";
    }
    cout << endl;
    sort(vec.begin(), vec.end());
    for (auto elm : vec)
    {
        cout << elm << " ";
    }
    cout << "\nThe minimum difference is : " << vec[n - 1] - vec[0];
}
