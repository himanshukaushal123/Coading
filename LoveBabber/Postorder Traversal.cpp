 vector<int>ans;
  Node *temp=NULL;
  stack<Node*>st;
  Node*node=root;
  while(node!=NULL || !st.empty()){
      if(node!=NULL){
          st.push(node);
          node=node->left;
      }else{
          temp=st.top()->right;
          if(temp==NULL){
              temp=st.top();
              st.pop();
              ans.push_back(temp->data);
              while(!st.empty()&&temp==st.top()->right){
                  temp=st.top();
                  st.pop();
                  ans.push_back(temp->data);
              }
          }else{
            node=temp;
          }
      }
  }
  return ans;
}
