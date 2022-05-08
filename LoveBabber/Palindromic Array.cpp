bool isPalin(int n){
    string st=to_string(n);
    string dup=st;
    reverse(dup.begin(),dup.end());
    return st==dup;
}
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    if(isPalin(a[i])==false)return 0;
    	}
    	return 1;
    }
