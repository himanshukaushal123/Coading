#include<algorithm>
#include<queue>
vector<int> mergeKSortedArrays(vector<vector<int>>&arr ,int k)
{
    // Write your code here. 
   vector<int>vec;
    //min heap of value,list number
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    //inserting first value of all the list
    for(int i=0;i<k;i++){
        pq.push({arr[i][0],i});
    }
    vector<int>idx(k,0);
    while(!pq.empty()){
        auto p=pq.top();
        pq.pop();
        vec.push_back(p.first);
        if(idx[p.second]+1<arr[p.second].size()){
            pq.push({arr[p.second][idx[p.second]+1],p.second});
        }
        idx[p.second]+=1;
    }    
    return vec;
}
