vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>vec;
        if(root==NULL)return vec;
        queue<pair<Node*,int>>pq;
        map<int,int>mp;
        pq.push({root,0});
        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
            Node* tmp=it.first;
            int line=it.second;
            if(mp.find(line)==mp.end()){
                mp[line]=tmp->data;
            }
            if(tmp->left!=NULL){
                pq.push({tmp->left,line-1});
            }
            if(tmp->right!=NULL){
                pq.push({tmp->right,line+1});
            }
        }
        for(auto x:mp){
            vec.push_back(x.second);
        }
        return vec;
    }
