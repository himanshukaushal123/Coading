class Solution{   
public:
int count=0;
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int val=k-arr[i];
            if(mp[val])
             count+=mp[val];
            mp[arr[i]]++;
        }
        return count;
    }
};
