/*
    Staircase - HackerRank
    link - https://www.hackerrank.com/challenges/staircase
    @umut
*/
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        for( int j = 1; j <= n; j++){
            if( n-(j+i) >= 0){
                cout << " ";
            }
            else
                cout << "#";
        }
        printf("\n");
    }
    return 0;
}
