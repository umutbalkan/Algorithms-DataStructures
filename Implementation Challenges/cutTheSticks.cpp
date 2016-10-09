/*
    Cut the Sticks - HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/cut-the-sticks
*/
#include <iostream>
using namespace std;

void printArray(int* a,int s){
    for(int i = 0; i < s; i++){
        cout << a[i];
    }
    
    cout << ": array" << endl;
}

int main(){
    int n;
    cin >> n;
    int* a = new int[n];
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> a[arr_i];
    }
    
    sort(a, a+n); // by sorting, we get the smallest element easily, which is the first the one. No need to search for it for every "cut".
    
    // the trick
    
    int num = n;
    //cout << num << endl; // printing out total stick number.
    
    
        for(int i = 0; i < n; i++){

            // if a[i] is <= to 0, then just ignore this unnecessary for-loop step.
            // there may be one than more same value. Then array may become: 0,0,0,3,6,7.
            // Saves "a lot" of steps in some cases.
            
            //cout << "i:" << i << " a[i]:" << a[i] << endl;
            if (a[i] <= 0){
                num--;
                //cout << "hey" << endl;
                continue;
            }
            
            cout << num << endl;
            num--;
            // printArray(a,n);
            int smallest = a[i]; // sorted ascending, the smallest one first.

            // every element have decreased ("cut") proportional to the smallest element.
            for( int j = i; j < n; j++){
                a[j] -= smallest;
            }
           
        }

    
    return 0;
}
