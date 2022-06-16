 vector<int> inOrder(Node* root) {
        // Your code here
         vector<int>vec;
        Node *node=root;
   stack<Node*>st;
   while(true){
       if(node!=NULL){
           st.push(node);
           node=node->left;
       }else{
           if(st.empty())break;
           node=st.top();
           st.pop();
           vec.push_back(node->data);
           node=node->right;
           
       }
   }
    return vec;
    }
