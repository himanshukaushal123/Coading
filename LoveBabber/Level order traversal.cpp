 vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>vec;
      if(node==NULL)return vec;
       queue<Node*>pq;
       pq.push(node);
       while(!pq.empty()){
           int size=pq.size();
           for(int i=0;i<size;i++){
               Node* temp=pq.front();
               pq.pop();
               if(temp->left!=NULL)pq.push(temp->left);
               if(temp->right!=NULL)pq.push(temp->right);
               vec.push_back(temp->data);
           }
       }
      return vec;
    }
