int countSquares(int x) {
        // code here
        int start = 1, end = sqrt(x), ans;
        while (start <= end) {
        int mid = (start + end) / 2;
        int sqr = mid * mid;
        if (sqr < x) {
            start = mid + 1;
            ans = mid;
        }
        else // If mid*mid is greater than x
            end = mid - 1;
    }
    return ans;
    }
