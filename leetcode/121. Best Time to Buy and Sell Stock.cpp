class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mina=INT_MAX,maxi=INT_MIN,profit=0;
      for(int i=0;i<prices.size();i++){
          mina=min(mina,prices[i]);
          profit=prices[i]-mina;
          maxi=max(maxi,profit);
      }  
        return maxi;
    }
};
