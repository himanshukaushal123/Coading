static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({start[i],end[i]});
        }
        sort(vec.begin(),vec.end(),cmp);
        int count=1;
        int x=vec[0].second;
        for(int i=1;i<vec.size();i++){
            if(x<vec[i].first){
                // cout<<x<<endl;
                count++;
                x=vec[i].second;
            }
        }
        return count;
    }
