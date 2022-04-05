/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void printAtLevelk(TreeNode* root,int k,vector<int>&vec){
        if(root==NULL){
            return;
        }
        if(k==0){
            vec.push_back(root->val);
            return;
        }
        printAtLevelk(root->left,k-1,vec);
        printAtLevelk(root->right,k-1,vec);
        return;
    }
    
    int solve(TreeNode* root, TreeNode* target, int k,vector<int>&vec){
        //base case target not present
        if(root==NULL){
            return -1;
        }
        //reach the target node
        if(root==target){
            printAtLevelk(target,k,vec); 
            return 0;//distance of target node to its parent node is zero
        }
        //next step- ancestor Ask the ancestor to find the target node to its left subtree and right subtree
        int DL=solve(root->left,target,k,vec);
        //if target node is present in left
        if(DL!=-1){
            //Again there is two cases
            //Ancestor itself or you go to thr right ancestor
            if(DL+1==k){
                vec.push_back(root->val);
            }else{
                printAtLevelk(root->right,k-DL-2,vec);
            }
            return 1+DL;
        }
         int DR=solve(root->right,target,k,vec);
         //if target node is present in right
        if(DR!=-1){
            //Again there is two cases
            //Ancestor itself or you go to thr right ancestor
            if(DR+1==k){
                vec.push_back(root->val);
            }else{
                printAtLevelk(root->left,k-DR-2,vec);
            }
            return 1+DR;
        }
        //node was not present in tree
        return -1;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>vec;
        solve(root,target,k,vec);
        return vec;
        
    }
};
