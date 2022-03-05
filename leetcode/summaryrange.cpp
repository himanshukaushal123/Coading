class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        int n = nums.size();
        vector<string> vec;
        if (n == 0)
        {
            return vec;
        }
        for (int i = 0; i < nums.size();)
        {
            int start = i, end = i;
            // while number are in consecutive
            while (end + 1 < n && nums[end + 1] == 1 + nums[end])
                end++;
            // break and push if end pointer is greater then start
            if (end > start)
                vec.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
            // if(start==end)
            else
                vec.push_back(to_string(nums[start]));

            i = end + 1;
        }
        return vec;
    }
};