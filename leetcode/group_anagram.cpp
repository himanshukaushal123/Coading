class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> vec;
        vector<string> copy(strs.begin(), strs.end());
        for (int i = 0; i < strs.size(); i++)
        {
            sort(strs[i].begin(), strs[i].end());
        }
        // sort(strs.begin(),strs.end());
        for (auto x : strs)
        {
            cout << x << " ";
        }
        unordered_map<string, vector<int>> mp;
        for (int i = 0; i < strs.size(); i++)
        {
            mp[strs[i]].push_back(i);
        }
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            vector<string> v;
            vector<int> vec1 = i->second;
            for (int j = 0; j < vec1.size(); j++)
            {
                v.push_back(copy[vec1[j]]);
            }
            vec.push_back(v);
        }
        return vec;
    }
};