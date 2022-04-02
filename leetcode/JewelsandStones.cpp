class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<int,int>mp;
        int sum=0;
        for(auto i:stones){
            mp[i]++;
        }
        for(auto i:jewels){
            auto it=mp.find(i);
            sum=sum+it->second;
        }
        return sum;
    }
};
