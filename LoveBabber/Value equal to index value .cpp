	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>vec;
	    for(int i=1;i<=n;i++){
	        if(arr[i-1]==i)vec.push_back(i);
	    }
	    return vec;
	}
