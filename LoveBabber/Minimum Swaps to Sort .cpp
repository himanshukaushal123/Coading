	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int count=0;
	    vector<pair<int,int>>vec(nums.size());
	    for(int i=0;i<nums.size();i++){
	        vec[i]={nums[i],i};
	    }
	    //O(N)
	    sort(vec.begin(),vec.end());//O(nlogn)
	    for(int i=0;i<nums.size();i++){
	        if(i==vec[i].second)continue;
	        else{
	            count++;
	            swap(vec[i],vec[vec[i].second]);
	            i--;
	        }
	    }
	    //O(N)
	    return count;
	}//TC(2N+NlogN)
