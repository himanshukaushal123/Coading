vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
     vector<int>temp;
        vector<vector<int>>merge;
        if(intervals.size()==0)return merge;
        sort(intervals.begin(),intervals.end());
        temp=intervals[0];
        for(int i=0;i<intervals.size();i++){
            if(temp[1]>=intervals[i][0]){
                temp[1]=max(temp[1],intervals[i][1]);
            }else{
                merge.push_back(temp);
                temp=intervals[i];
            }
        }
        merge.push_back(temp);
        return merge;
}
