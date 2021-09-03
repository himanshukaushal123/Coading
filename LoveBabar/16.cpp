/*Count Inversion*/
#include <iostream>
#include <set>
#include <algorithm>
#include <array>
using namespace std;

//1st approch
// int main()
// {
//     int inversion = 0, arr[] = {7, 4, 1, 3, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 inversion++;
//             }
//         }
//     }
//     cout<<inversion;
//     return 0;
// }
/*
Time complexity is n^2*/


//2nd approch
int main()
{
    array<int, 5> arr{7, 4, 1, 3, 5};
    multiset<int> m;
    int inversion = 0;
    multiset<int>::iterator it;
    for (int i = 0; i < arr.size(); i++)
    {
        m.insert(arr[i]);

        it = m.upper_bound(arr[i]);
        inversion = inversion + distance(it, m.end());
    }
    cout<<inversion;
}