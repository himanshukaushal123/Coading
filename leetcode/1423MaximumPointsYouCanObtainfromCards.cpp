class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0;
        int right = n - k;
        int totalSum = 0;
        int result;
        for(int i = right; i < n; i++){
            totalSum += cardPoints[i];
        }
        
        if(n == k){
            return totalSum;
        }
        result = totalSum;
        
        while(right < n){
            totalSum += cardPoints[left] - cardPoints[right];
            result = max(totalSum, result);
            left++;
            right++;
        }
        
        return result;
    }
};
