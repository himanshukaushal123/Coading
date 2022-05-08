	int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    if(v.size()%2!=0)
		    return (v[v.size()/2]);
		    int i=v.size()/2;
		    return ((v[i]+v[i-1])/2);
		}
