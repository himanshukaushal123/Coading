long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr, arr + n);
        long long  count = 0;
        for (int i = 2; i < n; i++) {
            int j = i - 1, k = 0;
            while (k < j) {
                if (arr[i]+arr[j]+arr[k] < sum) {
                    count += j - k; k++;
                } else j--;
            }
        }
        return count;
	}
