/*Given an array which consist of only 0,1 and 2.*/
#include <iostream>
using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {0, 2,0,2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
}