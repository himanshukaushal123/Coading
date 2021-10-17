#include <iostream>
using namespace std;

void binary_Search(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            cout << "Element is present at index "<<mid+1;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
            start = mid + 1;
    }
}

int main()
{
    int key, len, a[1000];
    cout << "Enter the number of elements: ";
    cin >> len;
    cout << "Enter the data: ";
    for (int i = 0; i < len; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the key you want to search";
    cin >> key;
    binary_Search(a, len, key);
    return 0;
}