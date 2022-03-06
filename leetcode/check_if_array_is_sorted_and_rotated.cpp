class Solution
{
public:
    
    // Atmost onr pair is num[i%n]>num[(i+1)%n] condition is true in cyclic order;
    //[3,4,5,1,2] num[2]>num[3] only one pair is satisfying above condition;
    //[1,2,3,4] num[3]>num[1] here also only one pair is satisfying above condition;
    
    bool check(vector<int> &nums)
    {
        int count = 0, n = nums.size();
    
        for (int i = 0; i < n; i++)
        {
            if (nums[i % n] > nums[(i + 1) % n])
            {
                if (count == 1)
                    return false;
                count++;
            }
        }
     
        return true;
    }
};