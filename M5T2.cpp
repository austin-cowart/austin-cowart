/*
CSC 134
M5T2
Austin Cowart
4/5/2026
*/


#include <iostream>
using namespace std;


// Given 2 numbers, print them out nicely on a line. 
void printResult(int number, int result) {
    cout << number << " squared=" << result << endl;
}

// Given a number, return the square of it.
int square(int number) {
    int result; 
    result = number * number; // Sqaured
    return result;
}

int main() {
    // Count Some Numbers
    // And find a Result to each
    int count = 1;
    int result; 

    // This version will be squares

    while (count =< 10){
        result = square(count);
        printResult(count, result);
        count++;
    }

}