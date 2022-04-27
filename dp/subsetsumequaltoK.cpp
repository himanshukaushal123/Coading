bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
	if(k==0) return true;
	if(n==0) return arr[n]==k;
	bool nottake=subsetSumToK(n-1,k,arr);
	bool take=false;
	if(k>=arr[n]){
		take=subsetSumToK(n-1,k-arr[n],arr);
	}
	return take || nottake;
}
