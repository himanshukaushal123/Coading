int solve(vector<int>&nums){
        int start=0,end=nums.size()-1;
        while(start<end)
        {
            int mid=(start+end)/2;
            if(nums[mid]>nums[end])
                start=mid+1;
            else
                end=mid;
        }
        return end;
    } 
int binarysearch(vector<int>&vec,int k,int start,int end){
    while(start<=end){
        int mid=(start+end)/2;
        if(vec[mid]==k)return mid;
        else if(vec[mid]>k)end=mid-1;
        else{
            start=mid+1;
        }
    }
    return -1;
}
int Search(vector<int> vec, int K) {
    //code here
   int bk=solve(vec);
   int i=binarysearch(vec,K,0,bk-1);
   if(i!=-1)return i;
    int j=binarysearch(vec,K,bk,vec.size()-1);
   if(j!=-1)return j;
   return -1;
    
}
