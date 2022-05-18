long long minCost(long long arr[], long long n) {
        // Your code here
        long long int sum=0;
        priority_queue<long long int,vector<long long int>,greater<long long int>>pq;
        for(long long int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        while(pq.size()>=2){
            long long int x=pq.top();
            pq.pop();
            long long int y=pq.top();
            pq.pop();
            sum=sum+x+y;
            pq.push(x+y);
        }
        return sum;
    }
