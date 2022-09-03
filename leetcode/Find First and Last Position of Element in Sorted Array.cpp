class Solution {
public:
    int upperbound(vector<int>&vec,int n){
    int start=0,end=vec.size()-1,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(vec[mid]==n){
            ans=mid;
            start=mid+1;
        }else if(vec[mid]>n){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}
    int lowerbound(vector<int>&vec,int n){
    int start=0,end=vec.size()-1,ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(vec[mid]==n){
            ans=mid;
            end=mid-1;
        }else if(vec[mid]>n){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>vec;
        int lb=lowerbound(nums,target);
        int ub=upperbound(nums,target);
        vec.push_back(lb);
        vec.push_back(ub);
        return vec;
    }
};
