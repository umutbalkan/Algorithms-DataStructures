/*
    Sock Merchant - HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/sock-merchant
*/
    
#include <iostream>

using namespace std;

void printArray(int a[],int size){
    for(int i = 0; i < size; i++)
        cout << a[i] <<" ";
    
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int* a = new int[n];
    for(int c_i = 0;c_i < n;c_i++){
       cin >> a[c_i];
    }
    // Pairing socks requires search. for the efficiency of this step., first we must sort the list.
    // In some cases n = 100, Sorting must be efficient as well. We don't want O(n) = n^2
    sort(a, a+n);
    int pairs = 0;
    //printArray(a, n);
    
    // comparing socks
    for(int i = 1; i < n; i+=2){ // index goes 1->3->5..->(n-2)->n
        if(a[i] == a[i-1]){ //checks previous value
            //cout << "tuna " << a[i] << ":" << a[i-1];
            pairs++;
        }
        else if(a[i] == a[i+1]) // checks next value
        {
            //cout << "bacon " << a[i] << ":" << a[i+1];
            pairs++;
            //cout << " | " << a[i] << " = a[i]" << " || " << "i: " << i << endl;
            i++;
        }
    }
    
    cout << pairs;
    return 0;
}
