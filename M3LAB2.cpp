/*
CSC 134
Austin Cowart
M3LAB2
03/03/2026
*/

// Convert a Number Grade (0-100)
// To a Letter Grade (F-A)

#include <iostream>
using namespace std;

int main(){

    // Determine Letter Grade
    // Given Numerical Grade Value
    
    // Ask for the numerical grade from User
    int numerical_grade; // The Numerical Grade of User
    cout << "Enter your numerical grade: ";
    cin >> numerical_grade;

    // Variable to Display Letter Grade After Calculation
    string letter_grade; // Letter Grade of User

    // Calculate Letter Grade based off Grade Ranges
    // Starting from Grade F(0-59) to Grade A(90-100)
    if (numerical_grade >= 0 && numerical_grade <= 59) {

        letter_grade = "F";

    } else if (numerical_grade >= 60 && numerical_grade <= 69) {

        letter_grade = "D";

    } else if (numerical_grade >= 70 && numerical_grade <= 79) {
        
        letter_grade = "C";

    } else if (numerical_grade >= 80 && numerical_grade <= 89) {

        letter_grade = "B";

    } else if (numerical_grade >= 90 && numerical_grade <= 100) {

        letter_grade = "A";

    }

    // Display Letter Grade to User
    cout << "Your letter grade is: " << letter_grade << endl;

    return 0; // No Errors
}