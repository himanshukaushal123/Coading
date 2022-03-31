class Solution {
public:
    vector<int> solve(vector<int>&nums,int s,int e,vector<int>&vec){
        if(s>e){
            return vec;
        }
        int mid=(e+s)/2;
        vec.push_back(nums[mid]);
        solve(nums,s,mid-1,vec);
        solve(nums,mid+1,e,vec);
        return vec;
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        int s=0,e=nums.size()-1;
        vector<int>vec;
        return solve(nums,s,e,vec);
        
    }
};

