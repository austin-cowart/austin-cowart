//CSC 134
//M2T1 - Product Sales      
// Austin Cowart
// 02/09/26

#include <iostream>
#include <iomanip> // For the 2 decimal places

using namespace std;

int main(){
    // Set up all Variables
    string first_name, last_name, full_name; // holds customer name
    string product = "apples"; //change to whatever you like
    int amount_purchased;
    double cost_each = 0.99;
    double total_cost;

    // Greet the Customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name =  first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    //Ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;


    //Calculate Total Price
    total_cost = amount_purchased * cost_each;

    //Formatting: Set all Prices to 2 Decimal Places
    cout << setprecision(2) << fixed;
    
    // Give the Result
    cout << "for "<< amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0; // no errors

}
