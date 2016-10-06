/*
    Time Conversion - HackerRank
    @umut
    link : https://www.hackerrank.com/challenges/time-conversion
*/

#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    // time input
    char* time = new char[9];
    cin >> time;
    
    // extracting AM-PM format
    char* format = new char[2];
    format[0] = time[8];
    format[1] = time[9];
    
    // extracting hours - mins - secs
    int* hour = new int[2];
    
    // char - '0' converts char type number to int.
    // 48 ASCII value (for '0') - 57 ASCII value (for '9').
    // 57(ascii for 9) - 48 (ascii for 0) = 9
    hour[0] = time[0] - '0';
    hour[1] = time[1] - '0';
   
    // determining PM-AM and converting 24-h format
    bool isAM = (format[0] + format[1]) - ('P' + 'M');
    if( !isAM && (hour[0] != 1 || hour[1] != 2)){
        hour[0] += 1;
        hour[1] += 2;
        
        // if hour[1] + 2 is greater than one digit of base 10. 
        if( hour[1] / 10 ){
            hour[1] /= 10;
            hour[0] += 1;
        }
    }
    
    // 12:05:01 AM - 00:05:01 24-h. conversion
    if ( isAM && hour[0] == 1 && hour[1] == 2){
        hour[0] = 0;
        hour[1] = 0;
    }
    
    // print
    cout << hour[0] << hour[1];
    for( int i = 2; i < 8; i++)
        cout << time[i];
    
    return 0;
}
