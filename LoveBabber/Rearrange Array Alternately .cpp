//o(n) and o(n)
void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	vector<int>vec;
    	int i=0,j=n-1;
    	while(i<=j){
    	    vec.push_back(arr[j]);
    	    j--;
    	    vec.push_back(arr[i]);
    	    i++;
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]=vec[i];
    	}
    	 
    }
//o(n),o(1)
