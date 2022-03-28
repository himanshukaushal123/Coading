class Solution {
public:
    void merge(vector<int>&vec,int s,int e){
        int mid=(s+e)/2;
        int i=s,j=mid+1,k=s;
        int temp[100000];
        while(i<=mid && j<=e){
            if(vec[i]<vec[j]){
                temp[k]=vec[i];
                k++;
                i++;
            }else{
                temp[k]=vec[j];
                k++;
                j++;
            }
        }
            while(i<=mid){
                temp[k]=vec[i];
                k++;
                i++;
            }
             while(j<=e){
                temp[k]=vec[j];
                k++;
                j++;
        }
        for(int l=s;l<=e;l++){
            vec[l]=temp[l];
        }
    }
    void mergeSort(vector<int>&nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid=(s+e)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
