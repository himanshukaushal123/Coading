class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    int search(Node *root,int key,int level){
        if(root==NULL){
            return -1;
        }
        if(root->data==key){
            return level;
        }
        int left=search(root->left,key,level+1);
        if(left!=-1){
            return left;
        }
        return search(root->right,key,level+1);
    }
    Node* lowestCommonAncestor(Node* root, int p,int q) {
        if(root==NULL){
            return NULL;
        }
        if(root->data==p || root->data==q){
            return root;
        }
        Node *leftans=lowestCommonAncestor(root->left,p,q);
        Node *rightans=lowestCommonAncestor(root->right,p,q);
        //one root present in left subtree one root present in right subtree
        if(leftans!=NULL and rightans!=NULL){
            return root;
        }
        if(leftans!=NULL){
            return leftans;
        }
        return  rightans;
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node *lca_node=lowestCommonAncestor(root,a,b);
        int l1=search(lca_node,a,0);
        int l2=search(lca_node,b,0);
        return l1+l2;
    }
};
