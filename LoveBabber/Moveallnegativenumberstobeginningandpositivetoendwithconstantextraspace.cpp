vector<int> separateNegativeAndPositive(vector<int> &arr){
    // Write your code here.
	int i=0,j=arr.size()-1;
	while(i<j){
	    if(arr[i]<0){
	        i++;
	    }
	    else if(arr[i]>=0){
	        while(j>i && arr[j]>=0){
	            j--;
	        }
	        swap(arr[j],arr[i]);
	        j--;
			i++;
	    }
	}
	return arr;
}
