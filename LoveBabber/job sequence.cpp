static bool cmp(Job a,Job b){
        return a.profit>b.profit;
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        vector<int>vec;
        sort(arr,arr+n,cmp);
        int maxi=arr[0].dead;
        for(int i=1;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        
        int slot[maxi+1];
        for(int i=0;i<=maxi;i++){
            slot[i]=-1;
        }
        
        int countJob=0,Jobprofit=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
            if(slot[j]==-1)
                {
                    slot[j]=i;
                    countJob++;
                    Jobprofit+=arr[i].profit;
                    break;
                }
            }
        }
        vec.push_back(countJob);
        vec.push_back(Jobprofit);
        return vec;
    } 
