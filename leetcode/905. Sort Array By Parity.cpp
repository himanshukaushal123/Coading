class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }
        nums.clear();
        for(auto x:even){
            nums.push_back(x);
        }
        for(auto x:odd){
            nums.push_back(x);
        }
        return nums;
        
    }
};
//2nd method
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};
//3rd method
bool cmp(int a,int b){
        return (a%2)<(b%2);
    }
class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        return nums;
    }
};
