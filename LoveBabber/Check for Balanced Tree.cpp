 int helper(Node *node) {
       if (node == NULL) return 1;
       
       int lh = helper(node->left);
       if (lh < 0) return -1;
       
       int rh = helper(node->right);
       if (rh < 0) return -1;
       
       if (abs(lh-rh) > 1) return -1;
       else return max(lh, rh) + 1;
   }
   
   bool isBalanced(Node *root) {
       int res = helper(root);
       if (res == -1) return false;
       else return true;
   }
https://drive.google.com/file/d/1g-xHLrCPTZxQyF-L7AobZEtjJLDMGWCy/view?usp=sharing
