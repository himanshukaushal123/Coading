class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int N=A.size();
        int l=0,r=N-1;
	     if(N==1){
            return A[0];
        }
        if(A[N-1]!=A[N-2]){
            return A[N-1];
        }
        if(A[0]!=A[1]){
            return A[0];
        }
	     while(l<=r){
	         int mid=(l+r)/2;
	         if(A[mid]<A[mid+1] && A[mid]>A[mid-1]){
                return A[mid];
            }
	         if(mid%2==0 &&A[mid+1]!=A[mid]){
	             r=mid-1;
	         }else if(mid%2==1 &&A[mid+1]==A[mid])
	             r=mid-1;
	         else{
	             l=mid+1;
	         }
	     }
	     return 0; 
    }
};
