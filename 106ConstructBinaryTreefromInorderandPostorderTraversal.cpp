class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int rootIndx=postorder.size()-1;
        return build(inorder,postorder,0,postorder.size()-1,rootIndx);
    }
    //helper function
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,int left,int right,int &rootIndx){
      if(left>right) return NULL;
       int pivot=left;//root value from postorder
        while(inorder[pivot]!=postorder[rootIndx]) pivot++;
        rootIndx--;
        TreeNode *root=new TreeNode(inorder[pivot]);
        root->right=build(inorder,postorder,pivot+1,right,rootIndx);
        root->left=build(inorder,postorder,left,pivot-1,rootIndx);
        return root;
    }
};
