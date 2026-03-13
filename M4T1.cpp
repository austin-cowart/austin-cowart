/*
CSC 13
M4T1
Austin Cowart
03/12/2026
*/

#include <iostream>
using namespace std;


// This program demonstrates a simple while loop.
void Program_One(){
    // Program One - Simple While Loop
    cout << "Simple While Loop" << endl;
    cout << "------------------------\n";
    int number = 0;
    
    while (number < 5){
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n";
}


// This program displays a list of numbers and
// Their squares.
void Program_Two(){
    // Program Two - List of Squares
    const int MIN_NUMBER = 1, // Starting Number to Square
            MAX_NUMBER = 10;  // Maximum number to Square
    
    int num = MIN_NUMBER;     // Counter


    cout << "Number Number Squared\n";
    cout << "------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; //Increment the counter.

    }
}

int main(){
    // Presents both Programs
    Program_One();
    cout << " " << endl;
    Program_Two();
    return 0;
}