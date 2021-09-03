/*find Largest sum contiguous Subarray [V. IMP]*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
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
    vec1 = vec;
    for (int k = 2; k <= n; k++)
    {
        int j = n - k;
        for (int i = 0; i < n - (k - 1); i++)
        {
            vec1.push_back(accumulate(vec.begin() + i, vec.end() - j, 0));
            j--;
        }
    }
    // for (auto elm : vec1)
    // {
    //     cout << elm << " ";
    // }
    cout << "\nThe max sum is: " << *max_element(vec1.begin(), vec1.end());
}

 