//1st method
class Solution {
public:
    
    static bool Comp(const int& a, const int& b) 
    { 
        int x = bitset<32>(a).count();
        int y = bitset<32>(b).count();
        if(x != y)
            return x < y;
        return a < b;
    } 
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(),Comp);
        return arr;
    }
};
