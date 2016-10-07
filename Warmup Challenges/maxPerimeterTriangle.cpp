/*
    Maximum Perimeter Triangle - HackerRank
    @umut
    link: http://www.hackerrank.com/challenges/maximum-perimeter-triangle
*/
    
#include <iostream>
#include <algorithm>
using namespace std;

// my humble subroutine for Triangle Inequality Theorem. Self explanatory.
bool isTriangle(int a, int b, int c){ 
    if( a + b <= c)
        return false;
    
    return true;
}


int main() {
    int n;
    cin >> n;
    long long int* sticks = new long long int[n];
    int* spots = new int[n-2]; // index matching with sticks. is that triple, triangle(1) or not(0).
    
    for( int i = 0; i < n; i++){
        cin >> sticks[i]; // taking inputs for sticks array
    }
    
    sort(sticks, sticks + n); // sorting array for convenience.

    
    for( int i = 2; i < n; i++){
        
        if(isTriangle(sticks[i-2], sticks[i-1], sticks[i]))
            spots[i-2] = 1;
        else
            spots[i-2] = 0;        
    }
    
    
    for( int i = n-3; i >= 0; i--){
        if(spots[i]) // not 0, means that specific trio can form a triangle.
        {
            cout << sticks[i] << " " << sticks[i+1] << " " << sticks[i+2];
            break;
        }
        else if( i == 0) cout << "-1"; // we traversed the whole array, no possible triangle with given sticks.
    }
    
    return 0;
}
