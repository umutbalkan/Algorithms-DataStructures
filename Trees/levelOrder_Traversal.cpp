/*
	Level Order Traversal - HackerRank
	@umut
	link: https://www.hackerrank.com/challenges/tree-level-order-traversal
*/

#include <queue>
// I need stack for this specific algorithm. Because ,in other words Breadth-First Search, can be easily implement by using queue data structure.


void LevelOrder(node* root)
{
    if (root == NULL) return;
    
    queue<node*> q;
    q.push(root);
    while (!q.empty()){
        node* n = q.front(); // .pop() is a void function, front returns the element
        q.pop();
        cout << n->data << " ";
        if (n->left)
            q.push(n->left);
        if (n->right)
            q.push(n->right);
    }
    
}
