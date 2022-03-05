class Solution {
public:
    //power of two number always have one onle set bits
    bool isPowerOfTwo(int n) {
        if(__builtin_popcount(n)==1){
            return true;
        }
        return false;
    }
};