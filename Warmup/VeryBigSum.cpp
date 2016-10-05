/*

	A Very Big Sum - HackerRank
	@umut
*/

#include <cmath>
#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long int sum = 0;
    long long* arr = new long long int[n];
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
    }
    for( int i = 0; i < n; i ++){
        sum += arr[i];
    }
    
    cout << sum;
    return 0;
}
