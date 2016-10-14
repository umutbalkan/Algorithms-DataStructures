/*
	Post Order Traversal - HackerRank
	@umut
	link: https://www.hackerrank.com/challenges/tree-inorder-traversal
*/

/* Node is defined as  
struct node
{
    int data;
    node* left;
    node* right;
};

/*


void postOrder(node *root) {
    if(!root)
        return; // if root is null, abort function.
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}
