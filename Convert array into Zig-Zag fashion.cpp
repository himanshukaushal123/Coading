	void zigZag(int arr[], int n) {
	    // code here
	    int flag=0;
	    for(int i=0;i<n-1;i++){
	        if(flag==0){
	            if(arr[i]>arr[i+1])swap(arr[i],arr[i+1]);
	            flag=1;
	        }else if(flag==1){
	             if(arr[i]<arr[i+1])swap(arr[i],arr[i+1]);
	            flag=0;
	        }
	    }
	    return;
	}
