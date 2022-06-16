vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>vec;
    if(root==NULL)return vec;
    queue<Node*>pq;
    pq.push(root);
    while(!pq.empty()){
        int size=pq.size();
        for(int i=0;i<size;i++){
            Node *temp=pq.front();
            pq.pop();
            if(temp->right!=NULL)pq.push(temp->right);
            if(temp->left!=NULL)pq.push(temp->left);
            vec.push_back(temp->data);
        }
    }
    reverse(vec.begin(),vec.end());
    return vec;
}
