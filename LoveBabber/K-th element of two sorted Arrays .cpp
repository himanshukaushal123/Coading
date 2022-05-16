 int kthElement(int A[], int B[], int m, int n, int k_req){
   int k = 0, i = 0, j = 0;
 
    // Keep taking smaller of the current
    // elements of two sorted arrays and
    // keep incrementing k
    while(i < m && j < n)
    {
        if(A[i] < B[j])
        {
            k++;
            if(k == k_req)
                return A[i];
            i++;
        }
        else
        {
            k++;
            if(k == k_req)
                return B[j];
            j++;
        }
    }
 
    // If array B[] is completely traversed
    while(i < m)
    {
        k++;
        if(k == k_req)
            return A[i];
        i++;
    }
 
    // If array A[] is completely traversed
    while(j < n)
    {
        k++;
        if(k == k_req)
            return B[j];
        j++;
    }
}
