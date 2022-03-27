class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int>vec;
        priority_queue<pair<int,int>>max;
        for(int i=0;i<mat.size();i++){
            max.push({count(mat[i].begin(),mat[i].end(),1),i});
            if(max.size()>k){
                max.pop();
            }
        }
        while(k--){
            vec.push_back(max.top().second);
            max.pop();
        }
         reverse(vec.begin(),vec.end());
        return vec;
    }
};
