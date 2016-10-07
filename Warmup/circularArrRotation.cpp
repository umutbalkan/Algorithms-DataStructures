/*
    Circular Array Rotation - HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/circular-array-rotation
*/

#include <iostream>
using namespace std;

struct Node{
    int x;
    Node* next;
};

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    
    // Node & Linked List stuff
    //------------------------------
    Node* head = new Node;
    Node* cur = head;
    Node* last = NULL;
    for( int i = 0; i < n; i++){

        cin >> cur->x;
        cur->next = new Node;
        last = cur;
        cur = cur->next;
    }
    cur = head;
    last->next = head; // last node points to head. Circular Linked List.
    //------------------------------
    
    int rot_ratio = n - (k % n); // This is not a magical equation, result is the "shift amount". (SHAMT lol)   
    // shifts head pointer.
    while(rot_ratio--)  head = head->next;

    // prints the rotated array according to given indices [wtf?!, this is a linked list, I f#cked up].
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cur = head;
        while(m--)  cur = cur->next;
    
        cout << cur->x << endl;
    }
    return 0;
}
