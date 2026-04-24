/*
CSC 134
M6T1
Austin Cowart
04/23/26
*/


#include <iostream>
using namespace std;


// Function Declarations
void method1();
void method2();


// Main
int main() {
    // Count the number of cars that pass a construction site
    // Using two different methods.
    method1();
    method2();


    return 0; // No errors.
}

// Defining Functions
void method1() {
    // Method One - Using no Arrays
    // Count the number of cars per day, for 5 days
    // Collect the total, then find the average.
    cout << "Method 1" << endl;
    cout << "---------------" << endl;
    cout << "Enter the number of cars that passed the constuction site per day." << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    const int MAXDAYS = 5;
    int day_count = 0;
    int car_today;          // Current number to add
    int car_total = 0;      // Total number of cars
    double car_average = 0; // Average amount of cars
    
    while (day_count < MAXDAYS) {
        cout << "Day " << day_count << ": ";
        cin >> car_today;
        car_total += car_today;
        day_count++; // Go to the next day
    }
    cout << "Total = " << car_total << endl;
    car_average = (double) car_total / MAXDAYS;
    cout << "Average = " << car_average << endl;
    cout << "---------------" << endl;
}

void method2() {
    // Method Two - Use two Arrays
    // First: names of the days
    // Second: Number of cars found on the days
    cout << "Method 2" << endl;
    cout << "---------------" << endl;

    const int MAXDAYS = 5;
    string days[MAXDAYS] = {"M" , "T" , "W", "Th", "F"}; // Initizilate Array
    int cars[MAXDAYS];
    int car_total = 0;
    double car_average = 0.0;

    for (int i=0; i < MAXDAYS; i++){
        cout << "# on " << days[i] <<": ";
        cin >> cars[i];
    }
    // Print the output in a table ("tabular") format
    cout << "Day\tCars" << endl;
    cout << "---------------" << endl;
    for (int i=0; i < MAXDAYS; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        // Find total amount
        car_total += cars[i];
    }
    // Find the total amount,
    // Then print the final results.
    car_average - (double) car_total / MAXDAYS;
    cout << "Total = " << car_total << endl;
    cout << "Average = " << car_average << endl;
}
