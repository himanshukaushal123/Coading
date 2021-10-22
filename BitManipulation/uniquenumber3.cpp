#include <iostream>
using namespace std;
#include<math.h>
int main()
{
    //Array of fixed size so it always in - o(1) space
    int cnt[64] = {0}, n, no;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        // update the cnt array by extracting bits
        int j = 0;
        while (no != 0)
        {
            int last_bit = (no & 1);
            cnt[j] += last_bit;
            j++;
            no = no >> 1;
        }
    }

    // itrate over the array
  int k = 0,sum=0;
    for (int i = 0; i < 64; i++)
    {
        cnt[i] %= 3;
          // convert into decimal
        sum = sum + cnt[i] * pow(2, k);
        k++;
    }
    cout<<sum; 
}