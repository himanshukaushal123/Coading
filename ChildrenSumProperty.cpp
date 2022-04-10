void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
	int sum=0;
	if(root==NULL){
		return;
	}
	if(root->left)
		sum+=root->left->data;
	if(root->right)
		sum+=root->right->data;
	if(root->data>sum){
		if(root->left) root->left->data=root -> data;
		if(root->right) root->right->data=root -> data;
	}
	else{
		root->data=sum;
	}
	changeTree(root->left);
	changeTree(root->right);
	int tot=0;
	if(root->left)tot+=root->left->data;
	if(root->right)tot+=root->right->data;
	if(root->left || root->right) root->data=tot;
}  
