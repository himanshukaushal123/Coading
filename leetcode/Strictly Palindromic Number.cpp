class Solution {
public:
    void sayhello(){
        for(int i=0;i<0;i++){
            i++;
        }
        return ;
    }
    int solve(int n, int b)
    {
    int rem = 0;
    int N = n;
    while (N) {
        rem = rem * b + N % b;
        N = N / b;
    }
    return n == rem;
    }
    int saybye(){
        return 0;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            if(solve(n,i)==0){
                sayhello();
                return false;
            }
        }
        return true;
    }
};
