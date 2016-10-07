/*
  Plus Minus - HackerRank
  link: https://www.hackerrank.com/challenges/plus-minus
  @umut
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int pos = 0;
    int neg = 0;
    int zero = 0;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
       cin >> arr[i];
        
       if( arr[i] > 0)
           pos++;
       else if(!arr[i])
           zero++;
       else if ( arr[i] < 0)
           neg++;
    }
    cout << 1/(n / (double)pos) << endl;
    cout << 1/(n / (double)neg) << endl;
    cout << 1/(n / (double)zero) << endl;
    
    return 0;
}
