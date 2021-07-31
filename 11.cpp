/*find duplicate in an array of N+1 Integers*/
#include <bits/stdc++.h>
using namespace std;

//1st approch
// class Solution
// {
// public:
//     int findDuplicate(vector<int> &nums)
//     {
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (nums[i] == nums[j])
//                 {
//                     return nums[i];
//                     break;
//                 }
//             }
//         }
//         return 0;
//     }
// };

//Second approch by sorting
// class Solution
// {
// public:
//     int findDuplicate(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         for (int i = 0; i < n; i++)
//         {
//             if (nums[i] == nums[i - 1])
//             {
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
    
// };

//third approch set
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (auto &num : nums) {
            if (seen.count(num))
                return num;
            seen.insert(num);
        }
        return -1;
    }
};

int main()
{
    Solution s1;
    vector<int> nums{1, 3, 4, 2, 2};
    sort(nums.begin(),nums.end());
   int number= s1.findDuplicate(nums);
   cout<<number;
}

