
/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/



// Height of node is the number of edges on the longest path between that node and a leaf.

int height(node* root){
   if (!root) // if root null..
        return -1;
   else{
       return max(height(root->left), height(root->right)) + 1;
   }
}
  
