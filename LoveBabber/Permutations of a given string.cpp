void permute(string S, int l, int r,set<string>&s) 
{ 
	int i; 
	if (l == r) 
		s.insert(S); 
	else
	{ 
		for (i = l; i <= r; i++) 
		{ 
			swap(S[l], S[i]); 
			permute(S, l+1, r,s); 
			swap(S[l], S[i]); //backtrack 
		} 
	} 
} 
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>vec;
		    set<string>s;
	        permute(S,0,S.size()-1,s);
	        for(auto x:s){
	            vec.push_back(x);
	        }
		    return vec;
		}
