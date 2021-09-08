/*https://codeforces.com/problemset/problem/1560/C*/

 
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int k;
		cin >> k;

		int no_of_col = 1;
		int sum = 1;
		int i = 1;

		while (k >= sum + no_of_col)
		{
			sum += no_of_col;
			no_of_col += 2;
			i += 1;
		}

		int col = k - sum + 1;
		if (col <= i)
			cout << col << ' ' << i << '\n';
		else
			cout << i << ' ' << (i - (col - i)) << '\n';
	}
}
