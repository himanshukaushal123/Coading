vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>vec;
        if(root==NULL)return vec;
        map<int,int>mp;
        queue<pair<Node*,int>>pq;
        pq.push({root,0});
        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
            Node* tmp=it.first;
            int line=it.second;
            mp[line]=tmp->data;
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
https://drive.google.com/file/d/1hXnr1FbMqFUqJC1PHsCRVHj_vXLsDEiy/view?usp=sharing
