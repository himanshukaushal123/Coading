class Solution {
public:
    int no_of_ones(int n){
        int count=0;
        while(n!=0){
            if(n&1==1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>vec;
        for(int i=0;i<=n;i++){
            int j=no_of_ones(i);
            vec.push_back(j);
        }
        return vec;
    }
};