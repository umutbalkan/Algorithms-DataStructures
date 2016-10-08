/*
    Divisible Sum Pairs - HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/divisible-sum-pairs
*/
#include <iostream>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    
    int* a = new int[n]; // array of integers
    for ( int i = 0; i < n; i++){
        cin >> a[i]; 
    }
    
    int p0 = 0; // pointers for searching valid pairs
    int p1 = 0;
    int valid_pairs = 0;
    for(int i = 0; i < n; i++){
        p0 = a[i];
        for( int j = i+1; j < n; j++){
            p1 = a[j];
            if ((p0 + p1) % k == 0) valid_pairs++;
        }
    }
    
    delete[] a;
    cout << valid_pairs;

    return 0;
}
