/*Merge 2 sorted vector without using Extra space.*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    vector<int> vec1{7, 6, 8, 9, 10};
    sort(vec.begin(),vec.end());
     sort(vec1.begin(),vec1.end());
    int n = vec.size() + vec1.size();
    vector<int> vec3(n);
    merge(vec.begin(), vec.end(), vec1.begin(), vec1.end(), vec3.begin());
    for (auto elm : vec3)
    {
        cout << elm << " ";
    }
}
