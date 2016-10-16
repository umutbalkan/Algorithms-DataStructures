/*
    Binary Search Tree: Lowest Common Ancestor @ HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor


Node is defined as:

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/

#include <stack>
//  I need stack for this specific algorithm
// Because Level-Order Traversal(= Depth-First Search), are easily implemented by queue

node * lca(node * root, int v1,int v2)
{
    stack<node*> v1Stack;
    stack<node*> v2Stack;
    
    node* cur0 = root;
    v1Stack.push(root);
    while(cur0->data != v1) // while cur0->data is not equal to v1
    {
        
        if(cur0->data > v1) cur0 = cur0->left;
        else if(cur0->data < v1) cur0 = cur0->right;
             
        v1Stack.push(cur0);
    } // after this loop, v1Stack contains the route for v1 in the tree and the top element in the stack is 'v1'
    
    
    
    node* cur1 = root;
    v2Stack.push(root);
    while(cur1->data != v2) // while cur1->data is not equal to v2
    {
         
        if(cur1->data > v2) cur1 = cur1->left;
        else if(cur1->data < v2) cur1 = cur1->right;

        v2Stack.push(cur1);
    } // after this loop, v2Stack contains the route for v1 in the tree and the top element in the stack is 'v1'
    
    
    
    int v1Ancestor = v1Stack.top()->data;
    int v2Ancestor = v2Stack.top()->data;
    while(!v1Stack.empty() && !v2Stack.empty()){
        
        if(v1Stack.size() >= v2Stack.size()){  // comparing stack size
            v1Stack.pop();
            v1Ancestor = v1Stack.top()->data;
            
        }
        if(v1Stack.size() < v2Stack.size()){
            v2Stack.pop();
            v2Ancestor = v2Stack.top()->data;
        }
        if(v1Ancestor == v2Ancestor){
            return v1Stack.top(); // else v1Ancestor == v2Ancestor then we've found the lowest common ancestor.
        }
    }



   return 0;
}

