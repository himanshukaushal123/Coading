vector <int> preorder(Node* root)
{
  // Your code here
  vector<int>ans; 
  stack<Node*>st;
  st.push(root);
  while(!st.empty()){
      Node*temp=st.top();
      st.pop();
      ans.push_back(temp->data);
      if(temp->right!=NULL)st.push(temp->right);
      if(temp->left!=NULL)st.push(temp->left);
  }
  return ans;
}
