/*
    Angry Professor - HackerRank
    @umut
    link: https://www.hackerrank.com/challenges/angry-professor
*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int numOfStudents = 0;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
           if(a[a_i] <= 0) numOfStudents++;
        }
        
        (numOfStudents >= k) ? cout << "NO\n" : cout << "YES\n";
        
        a.clear();
    }
    return 0;
}
