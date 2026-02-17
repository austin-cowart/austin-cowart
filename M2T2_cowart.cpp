/*
CSC-134
M2T2 - Reciept Calculator
cowarta
02/17/2026
Goal: A correct looking receipt that handles sales tax. 
Assumption: Sales tax is 8% (varies by county)
*/


#include <iostream>
using namespace std;

int main(){
    // Today's Roleplay: We're making the receipt printer for a restaurant.
    // Declare all Variables
    string meal_name = "Burger Platter"; // change to anything
    int num_meals;                       // How many they buy
    double meal_price = 5.99;            // $5.99
    double sub_total;                    // Price before tax/tips
    double tax_rate = 0.08;              // 8% is 8/100 ("per cent")
    double tip_amount;
    double tax_amount;                   // $ of the actual tax charged
    double total_price;                  // subtotal + tip + tax




    // Get User Input
    cout << "Welcome to CSC 134 Grill." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "How many would you like? ";
    cin >> num_meals;
    cout << "Tip amount? (min 0)? ";
    cin >> tip_amount;


    // Do the Calculation
    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate; // this much is ADDED to the bill
    // add tax and tips
    total_price = sub_total + tip_amount + tax_amount;

    // Present the Output
    cout << endl;
    cout << "YOUR ORDER" << endl << "------------------------------" << endl; 
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "Tax: \t\t\t$" << tax_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total: \t\t\t$" << total_price << endl; 
    cout << "THANK YOU COME AGAIN" << endl;

    return 0; //no errors
}