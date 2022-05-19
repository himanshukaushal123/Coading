int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    sort(arr, arr+n);
    	sort(dep, dep+n);
    	
    	int i=1, j=0;
    	int plat = 1;
    	while(i<n and j<n)
    	{
    	    if(arr[i] <= dep[j])
    	    {
    	        plat++;
    	        i++;
    	    }
    	    else
    	    {
    	        i++;
    	        j++;
    	    }
    	}
    	return plat;
    }
