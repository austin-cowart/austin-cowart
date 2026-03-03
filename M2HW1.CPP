/*
CSC 134
M2HW1 - Gold
Austin Cowart
03/02/2026
*/

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

void question_one(){
    // Question 1 
    // Bank Transaction
    cout << "Question 1 - Bank Transaction" << endl;
    
    // The Name of the User
    string account_username;
    cout << "What's your name?: " << endl;
    cin >> account_username;
    cout << "Hello, " << account_username << endl;

    // Account Number (6 Digits)
    int account_number;
    cout << "Type your account number, (6 Digits):  ";
    cin >> account_number;
    
    // Determine Inital Account Balance, Deposit Amount and Withdrawl Amount
    double 
    starting_balance, // The starting account balance
    deposit_amount,  // The amount of the deposit
    withdrawl_amount;  // The amount of the withdrawl

    cout << "What is your starting account balance?: ";
    cin >> starting_balance;
    cout << "How much would you like to deposit from your account?: ";
    cin >> deposit_amount;
    cout << "How much would you like to withdrawl from your account?: ";
    cin >> withdrawl_amount;
    cout << setprecision(2) << fixed << showpoint;

    // Calculate Final Account Balance
    double final_account_balance;
    final_account_balance = (starting_balance + deposit_amount) - withdrawl_amount;

    // Display Transaction Receipt
    cout << "TRANSACTION RESULTS" << endl;
    cout << "USERNAME: " << account_username << endl;
    cout << "ACCOUNT NUMBER: " << account_number << endl;
    cout << "FINAL BALANCE: $" << final_account_balance << endl;
    cout << "HAVE A GOOD DAY" << endl;

}

void question_two(){
    // Question 2
    // General Crates
    cout << "Question 2 - General Crates" << endl;


    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length,  // The crate's length
    width,          // The crates' width
    height,         // The crate's height
    volume,         // The volume of the crate
    cost,           // The cost to build the crate
    charge,         // The customer charge for the crate
    profit;         // The profit made on the crate

    // Set the desired output formattting for numbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;


    // Calculate the crate's volume, the cost to produce it,
    // The charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data.
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
}

void question_three(){
    // Question 3
    // Pizza Party
    cout << "Question 3 - Pizza Party" << endl;

    // Determine Number of Pizzas Ordered,
    // How Many Slices per Pizza,
    // How many Visitors are Coming

    int number_of_pizzas; // Number of Pizzas
    int slices_per_pizza; // Number of Slices for Each Pizza
    int number_of_visitors; // Number of Visitors Arriving to the Pizza Party

    cout << "How many pizzas are you ordering?: ";
    cin >> number_of_pizzas;
    cout << "How many slices are in each pizza?: ";
    cin >> slices_per_pizza;
    cout << "How many visitors are coming to the party?: ";
    cin >> number_of_visitors;

    // Calculate total number of slices of Pizza
    int total_slices = number_of_pizzas * slices_per_pizza;
    // Calculate how many slices are distributed, and how many are left over
    int remaining_slices = total_slices 

    //TODO: Find a way to distribute 3 slices to each visitor in the party

}

void question_four(){
    // Question 4
    // FTCC Sports Team
    cout << "Question 4 - FTCC Sports Team" << endl;

    // Showcase Team Cheering Message
    string letsGO; // "Let's go" - Beginning of Cheer Message
    string school; // "FTCC" - School Name
    string team; // "Trojans" - Team Name
    string cheerOne; // "Let's go FTCC" - First Cheer Message
    string cheerTwo; // "Let's go Trojans" - Second Cheer Message

    // Print First Cheer Message
    for (i=0, i++, i<3){
        cout << letsGO + school << endl;
    }
}

int main(){
    // Ask User for Question Choice
    int question_number;
    cout << "What question would you like to see? : (1-4)";
    cin >> question_number;
    
    if (question_number == 1){
        question_one();
    } else if (question_number == 2){
        question_two();
    } else if (question_four == 4){
        question_four();
    }
    return 0;
}