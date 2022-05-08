 long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long int j=0,mini=INT_MAX;
    for(int i=m-1;i<n;i++){
    mini=min(mini,a[i]-a[j]);
    j++;
    }   
    return mini;
    }
