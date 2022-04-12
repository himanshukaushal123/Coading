class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root)return "";
        
       string s="";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            q.pop();
            if(node!=NULL)
                s.append(to_string(node->val)+',');
            else
                s.append("#,");
            if(node!=NULL){
                q.push(node->left);
                q.push(node->right);
            }
        }
        cout<<s;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return NULL;
        cout<<data;
        stringstream s(data);
        string str;
        getline(s,str,',');
        cout<<str<<endl;
        TreeNode *root=new TreeNode(stoi(str));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            
            TreeNode *node=q.front();
            q.pop();
            
            getline(s,str,',');
            cout<<str<<endl;
            if(str=="#"){
                node->left=NULL;
            }
            else{
                TreeNode* leftnode=new TreeNode(stoi(str));
                node->left=leftnode;
                q.push(leftnode);
            }
            
            getline(s,str,',');
            cout<<str<<endl;
            if(str=="#"){
                node->right=NULL;
            }
            else{
                TreeNode* rightnode=new TreeNode(stoi(str));
                node->right=rightnode;
                q.push(rightnode);
            }
        }
        return root;
    }
};
