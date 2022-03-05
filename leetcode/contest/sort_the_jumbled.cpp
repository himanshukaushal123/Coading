class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
    vector<vector<int>>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            vector<int>vec;
            int val=nums[i];
            if(val>0){
                while(val){
                    vec.push_back(val%10);
                    val=val/10;
                }
            }
            else
                vec.push_back(0);
            reverse(vec.begin(),vec.end());
            int a=0;
            for(int i=0;i<vec.size();i++)
                a=a*10+mapping[vec[i]];
                ans.push_back({a,i});
        }
            vector<int>res;
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size();i++){
                res.push_back(nums[ans[i][1]]);
            }
            return res;
        }
};