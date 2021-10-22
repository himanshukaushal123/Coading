#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include<algorithm>

int myCompare(string X, string Y)
{
	// first append Y at the end of X
	string XY = X.append(Y);

	// then append X at the end of Y
	string YX = Y.append(X);

	// Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;//FOR making largest
	//return YX.compare(XY) > 0 ? 1: 0;//FOR smallest
}
void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);

	for (int i=0; i < arr.size() ; i++ )
		cout << arr[i];
	cout<<"\n";
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<string> arr;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            arr.push_back(s);
        }
        printLargest(arr);
    }
}