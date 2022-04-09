//First Approch TC 20MS
class Solution {
public:
    
   static bool cmp(pair<int, int> a,pair<int, int> b){
     return a.second > b.second;
   }

    vector<pair<int,int> >sort(map<int, int>& M){
    vector<pair<int,int> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
    std::sort(A.begin(), A.end(), cmp);
        return A;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int num : nums){
            mp[num]++;
        } 
        vector<int>vec;
         vector<pair<int,int> >a;
      //Sorting according to value not key
        a=sort(mp);
        int i=0;
      for(auto it=a.begin();it!=a.end();it++){
          if(i==k){
              break;
          }
          vec.push_back(it->first);
          i++;
      }
        return vec;
    }
};
//Second Approch TC 17MS
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        
        vector<int> res;
        // pair<first, second>: first is frequency,  second is number
        priority_queue<pair<int,int>> pq; 
        for(auto it = map.begin(); it != map.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > (int)map.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};
