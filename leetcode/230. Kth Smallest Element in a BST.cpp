 //Inorder travesal because it's output are in asscending order
    void inorder(TreeNode *root,vector<int>&vec){
        if(root==NULL) return;
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    int kthSmallest(TreeNode* root, int k) {
     vector<int>vec;
        inorder(root,vec);
        return vec[k-1];
    }

//2nd Method
