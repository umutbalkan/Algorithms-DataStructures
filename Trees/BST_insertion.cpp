/* 
  Binary Search Tree : Insertion @ HackerRank
  @umut
  Link: https://www.hackerrank.com/challenges/binary-search-tree-insertion
*/


/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * leaf, int key)
{
    
  if(leaf){
          if(key < leaf->data && leaf != NULL)
          {
                if(leaf->left!=NULL)
                   insert(leaf->left, key);
                else
                {
                   leaf->left=new node;
                   leaf->left->data=key;
                   leaf->left->left=NULL;    //Sets the left child of the child node to null
                   leaf->left->right=NULL;   //Sets the right child of the child node to null
                }  
      }
      else if(key >= leaf->data && leaf != NULL)
      {
            if(leaf->right!=NULL)
                insert(leaf->right, key);
            else
            {
              leaf->right=new node;
              leaf->right->data=key;
              leaf->right->left=NULL;  //Sets the left child of the child node to null
              leaf->right->right=NULL; //Sets the right child of the child node to null
            } 
       }
    }
  else{
      leaf = new node;
      leaf->data=key;
      leaf->left=NULL;    //Sets the left & right nodes to null
      leaf->right=NULL;
  }
   return leaf;
}
