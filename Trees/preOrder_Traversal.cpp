/*
    Preorder Traversal - HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/tree-preorder-traversal
*/


//Node is defined as  
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    if(root) 
    // meaning rootPtr is not null(= 0)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
        

}
