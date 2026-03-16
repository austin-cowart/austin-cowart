/*
CSC 134
M4HW1 - Gold
Austin Cowart
03/16/2026
*/

#include <iostream>
using namespace std;

// Print a Multiplication Table
// From 1 to 12.

int main(){
    // Variables for Printing Table
    //int first_number;     // First Number to multiply
    //int second_number;    // Second Number to multiply
    int start_number;       // Starting Number
    int max_number = 12;    // Max Number in table

    //Starts at 1, increases until
    //it equals 12.
    int increasing_second_number = 1; 

    // Ask user for number
    // If number is not within 1 through 12, 
    // Ask again.
    bool number_in_range = false;    // Default false, until condition "number within range" is met.
    while (number_in_range == false){
        cout << "What number table would you like to see? (1-12): " << endl;
        cin >> start_number;

        //Check to see if starting number is within range (1-12)
        if (start_number <= 12 && start_number >= 1){
            number_in_range = true;
        }
        else if (start_number > 12 || start_number < 1){
            cout << "Sorry. This number is not allowed." << endl;
            cout << "Please try again using a number from 1 through 12. (1-12)" << endl;
        }
    }
    
    // Print Multipllication table
    while (increasing_second_number < (max_number + 1)){
        
        // Calculate and Present Results
        int total_number = (start_number * increasing_second_number); // First times second
        cout << start_number << " times " << increasing_second_number << " is " << total_number << "." << endl;
        increasing_second_number += 1;
    }
    
    return 0;
}