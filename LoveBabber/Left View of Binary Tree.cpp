void solve(Node *root,int level,vector<int>&ds){
    if(root==NULL)return;
    if(ds.size()==level){
        ds.push_back(root->data);
    }
        solve(root->left,level+1,ds);
        solve(root->right,level+1,ds);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ds;
    solve(root,0,ds);
   return ds;
}
