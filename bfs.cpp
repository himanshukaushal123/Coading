void bfs(TreeNode* root){
    queue<TreeNode*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode* i=st.front();
        cout<<it.data<<" ";
        st.pop();
        if(i->left){
            st.pusf(f->left);
        }
        if(i->right){
            st.push(i->right);
        }
    }
}
