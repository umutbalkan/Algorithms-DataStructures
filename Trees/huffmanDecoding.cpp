/*
    Huffman Decoding @ HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/tree-huffman-decoding
*/


/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/

using namespace std;
void decode_huff(node * root,string s)
{       
    node* cur = root;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){ // s[i] == '1'
            cur = cur->right;
        }
        else{ // s[i] == '0'
            cur = cur->left;
        }
        
        if(cur->data != '\0'){
            cout << cur->data;
            cur = root;
        }
    }
}
