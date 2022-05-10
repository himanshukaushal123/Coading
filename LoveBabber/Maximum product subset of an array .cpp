 long long int findMaxProduct(vector<int>&a, int n){
        long long int zero=0,neg=0,prod=1;
        int max_neg=INT_MIN;
        long long int mod=1e9+7;
        //Write your code here 
        if(n==1)return a[0];
        for(int i=0;i<n;i++){
            if(a[i]==0){
            zero++;
            continue;
            }
            if(a[i]<0){
                neg++;
                max_neg=max(max_neg,a[i]);
            }
            prod=(prod%mod*a[i])%mod;
        }
        if(zero==n)return 0;
        else if(neg==1 && neg+zero==n)return 0;
        if(neg%2!=0)prod/=max_neg;
        return prod;
    }
