/*
CSC 134
M5T2
Austin Cowart
4/5/2026
*/


#include <iostream>
using namespace std;

int main() {
    // Count Some Numbers
    // And find a Result to each
    int count = 0;
    int result;

    while (count < 12) {
        // What is 100 times the count?
        result =  10 * count;
        cout << count << " " << result << 
        endl;
        count++;
    }

    return 0;
}