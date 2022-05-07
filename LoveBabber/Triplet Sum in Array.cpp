 bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        
    int l,e;
    sort(A,A+n);
    for(int i=0;i<n-2;i++){
        l=i+1;
        e=n-1;
        while(l<e){
        if(A[i]+A[l]+A[e]==X)return true;
        else if(A[i] + A[l] + A[e] < X) l++;
        else e--;
    }
    }
    return false;
    }
