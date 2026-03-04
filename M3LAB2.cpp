/*
CSC 134
Austin Cowart
M3LAB2
03/03/2026
*/

// Convert a Number Grade (0-100)
// To a Letter Grade (A-F)

#include <iostream>
using namespace std;

int main(){
    
    // Ask for the numerical grade
    int numerical_grade;
    cout << "What is your grade?: ";
    cin >> numerical_grade;

    // Determine Letter Grade within each grade range
    // Given Numerical Grade Value
    if (numerical_grade > 3){
        cout << "F";
    }



    return 0;
}