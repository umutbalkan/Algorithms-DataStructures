/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void traverse_left(node* root){
    if(root){
        traverse_left(root->left);
        cout << root->data << " ";
    }
}

void traverse_right(node* root){
    if(root){
        cout << root->data << " ";
        traverse_right(root->right);
    }
}

void top_view(node* root)
{
    if(!root){ // if Node pointer is null
        return;
    }
    
    traverse_left(root);
    traverse_right(root->right);
}
