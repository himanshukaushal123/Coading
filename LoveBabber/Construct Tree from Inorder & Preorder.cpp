Node *build(int in[],int inStart,int inEnd,int pre[],int preStart,int preEnd,map<int,int>&mp){
        if(inStart>inEnd||preStart>preEnd) return NULL;
        Node *root=new Node(pre[preStart]);
        int inRoot=mp[root->data];
        int numsleft=inRoot-inStart;
        root->left=build(in,inStart,inRoot-1,pre,preStart+1,preStart+numsleft,mp);
        root->right=build(in,inRoot+1,inEnd,pre,preStart+numsleft+1,preEnd,mp);
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[in[i]]=i;
        }
        return build(in,0,n-1,pre,0,n-1,mp);
        
    }
