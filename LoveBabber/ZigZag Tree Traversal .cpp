//Idea is make a level order travesal and alterbatively reverse the vector
 vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int>ans;
    	if(root==NULL)return ans;
    	vector<vector<int>>vec;
    	queue<Node*>pq;
    	int flag=1;
    	pq.push(root);
    	while(!pq.empty()){
    	    int size=pq.size();
    	    vector<int>t;
    	    for(int i=0;i<size;i++){
    	         Node*tmp=pq.front();
    	         pq.pop();
    	         if(tmp->left!=NULL)pq.push(tmp->left);
    	         if(tmp->right!=NULL)pq.push(tmp->right);
    	         t.push_back(tmp->data);
    	    }
    	    if(flag==1){
    	        for(auto x:t){
    	            ans.push_back(x);
    	        }
    	    flag=0;
    	    }
    	    else if(flag==0){
    	        reverse(t.begin(),t.end());
    	         for(auto x:t){
    	            ans.push_back(x);
    	        }
    	    flag=1;
    	    }
    	}
    	return ans;
    }
