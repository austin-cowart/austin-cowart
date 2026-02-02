//CSC 134
//M1LAB
// Austin Cowart
// Feb. 2, 2026

#include <iostream>
#include <string>
using namespace std;

int main(){
    // This program will simulate an apple orchard.
    // The Owner's Name
    string name = "Jane Smith";
    // Number of Apples Owned
    int apples = 100;
    // Price per apple
    double pricePerApple = 0.25;

    // Calculate Total Price of Apples
    double totalPrice = (double) apples * pricePerApple;

    // Print all Information about the Orchard
    cout << "Welcome to " << name;
    cout << " 's apple orchard." << endl;
    cout << "We have " << apples;
    cout << " apples in stock" << endl;
    cout << "Apples are curerntly $";
    cout << pricePerApple << " each." << endl;

    //Final Line, to Print totalPrice
    cout << "If you want them all, that will be $" << totalPrice << endl;

    return 0;
}
