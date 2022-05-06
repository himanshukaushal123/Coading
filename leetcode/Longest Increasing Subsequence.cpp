class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> vec;
        vec.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (vec.back() >= nums[i])
            {
                int it = lower_bound(vec.begin(), vec.end(), nums[i]) - vec.begin();
                vec[it] = nums[i];
            }
            else
            {
                vec.push_back(nums[i]);
            }
        }
        return vec.size();
    }
};
