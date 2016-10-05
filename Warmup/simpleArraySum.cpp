/*

Simple Array Sum - HackerRank
@ umut
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    int size;
    cin >> size;
    int sum = 0;
    int input = 0;
    for(int i = 0; i < size; i++){
        cin >> input;
        sum += input;
    }
    
    cout << sum;
    
    return 0;
}