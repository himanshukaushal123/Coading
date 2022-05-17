int solve(int n){
        if(n<=1)return n;
        return n+solve(n/5);
    }
        int findNum(int n)
        {
        //complete the function here
        int start=1,end=n,x;
        while(start<end){
            int mid=(start+end)/2;
            x=solve(mid);
            if(x>=n)end=mid;
            else{
                start=mid+1;
            }
        }
        return 5*start;
        
        }
