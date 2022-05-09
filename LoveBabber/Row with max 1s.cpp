	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int res=INT_MIN;
	    int ans=-1;
	    for(int i=0;i<n;i++){
	        int ind=0;
	        ind=upper_bound(arr[i].begin(),arr[i].end(),0)-arr[i].begin();
	        int l=arr[i].size()-ind;
	        if(l!=0){
	        if(l>res){
	            res=l;
	            ans=i;    
	        }
	        }
	    }
	    return ans;
	}
