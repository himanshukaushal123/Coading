class Solution {
public:
    int height(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh,rh)+1;
    }
void printNodes(TreeNode* root, int level, int K,int &sum)
{
    // Base Case
    if (root == NULL) {
        return;
    }
 
    // Recursive Call for
    // the left subtree
    printNodes(root->left, level + 1, K,sum);
 
    // Recursive Call for
    // the right subtree
    printNodes(root->right, level + 1, K,sum);
 
    // If current level is
    // the required level
    if (K == level) {
      sum=sum+root->val;
    }
}
    int deepestLeavesSum(TreeNode* root) {
        int h=height(root);
        int sum=0;
        printNodes(root,0,h-1,sum);
        return sum;
    }
};
