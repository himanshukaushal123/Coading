 int CountSetBits(int n)
    {
        int cnt = 0;
        while(n)
        {
            n = n & (n-1);
            cnt++;
        }
        return cnt;
    }
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
       return a.second > b.second;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        vector<pair<int,int>>ans;
        for(int i = 0;i<n;i++)
        {
            int x = CountSetBits(arr[i]);
            ans.push_back({arr[i],x});
        }
        stable_sort(ans.begin(),ans.end(),cmp);
        for(int i = 0;i<n;i++)
        {
            arr[i] = ans[i].first;
        }
    }
