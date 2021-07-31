/*Minimum no. of Jumps to reach end*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
#define PB push_back

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vi vec, vec1;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        vec.PB(num);
    }

    int i = 1, count = 1;
    while (i < n - 1)
    {
        int c = vec[i];
        if (i + c < n && vec[i]!=0)
        {
            i = i + c;
            count++;
        }
        else if (i + c < n && vec[i] == 0)
        {
            cout << "Unable to jump\n";
            break;
        }
        else
        {
            i = i + c;
            count++;
        }
    }
    cout << "The minimum step: " << count;

    //using stl
}
