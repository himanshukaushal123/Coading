/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int findLevel(TreeNode* root,int x,int level)
{
    if(root == NULL)
        return 0;
    if(root->val==x)
        return level + 1;
    int leftLevel = findLevel(root->left,x,level+1);
    int rightLevel = findLevel(root->right,x,level+1); 
    return leftLevel==0?rightLevel:leftLevel;
    
    
}
int findParent(TreeNode* root,int x,int parent)
{
    if(root==NULL)
        return -1;
    if(root->val==x)
        return parent;
    int left = findParent(root->left,x,root->val);
    int right = findParent(root->right,x,root->val);
    
    return left==-1?right:left;
    
}
bool isCousins(TreeNode* root, int x, int y) {
    
	// finding the depth of both nodes
    int lx = findLevel(root,x,0);  
    int ly = findLevel(root,y,0);
	
	// find the parent of both nodes
    int px = findParent(root,x,-1);
    int py = findParent(root,y,-1);
	
    if(px==py)
        return false;
    if(lx == ly)
    return true;
    
    return false;
}
};
