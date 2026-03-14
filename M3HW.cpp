/*

CSC 134
M3HW1 - Gold
Austin Cowart
03/12/2026

*/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;


void Question_One(){
    // Question 1
    cout << "Question 1" << endl;
    
    // Asks user how is their day
    string response;
    cout << "How is your day today? " << "Please type Good or Bad." << endl;
    cin >> response;

    // Determine response based on user input
    if (response == "Good")
    {
        cout << "That's great! I hope it stays good!" << endl;
    }
    else if (response == "Bad")

    { 
        cout << "I'm sorry to hear that. I hope it gets better!" << endl;
    }
    else if (response != "Good" || response != "Bad")
    { 
        cout << "That's ok. There are many ways to describe someone's day." << endl;
    }

}

void Question_Two(){
    // Question Two
    cout << "Question 2" << endl;

    // Today's Roleplay: We're making the receipt printer for a restaurant.
    // Declare all Variables
    int meal_type;                       // Type of Meal (Dine-in: 1, or Takeout: 2)
    string meal_name = "Burger Platter"; // change to anything
    int num_meals;                       // How many they buy
    double meal_price;                   // How much is the meal*
    double sub_total;                    // Price before tax/tips
    double tax_rate = 0.08;              // 8% is 8/100 ("per cent")
    double tip_percent = 0.15;           // 15% of price of meal
    double tax_amount;                   // $ of the actual tax charged
    double tip_amount;
    double total_price;                  // subtotal + tip + tax

    // Get User Input
    cout << "Welcome to CSC 134 Grill." << endl;
    cout << "Today's Special: " << meal_name << endl;
    cout << endl;
    cout << "What is the price of your meal?" << endl;
    cin >> meal_price;
    cout << "How many would you like? ";
    cin >> num_meals;
    cout << "Would you like this to be Dine-in our Takeout?" << endl;
    cout << "Type 1 for Dine-in, or 2 for Takeout." << endl;
    cin >> meal_type;


    // Do the Calculation
    sub_total = meal_price * num_meals;
    tax_amount = sub_total * tax_rate; // this much is ADDED to the bill
    
    // If meal is Dine-In:
    if (meal_type == 1){
        tip_amount = tip_percent * meal_price;
    }

    // add tax and tips
    total_price = sub_total + tip_amount + tax_amount;

    // Present the Output with 2 Decimal Places
    cout << setprecision(2) << fixed; // Remember to Import <iomanip>
    cout << endl;
    cout << "YOUR ORDER" << endl << "------------------------------" << endl; 
    cout << num_meals << " x " << meal_name << "\t$" << meal_price << endl;
    cout << "Subtotal: \t\t$" << sub_total << endl;
    cout << "Tip: \t\t\t$" << tip_amount << endl;
    cout << "Tax: \t\t\t$" << tax_amount << endl;
    cout << "------------------------------" << endl;
    cout << "Total: \t\t\t$" << total_price << endl; 
    cout << "THANK YOU COME AGAIN" << endl;
}

void Question_Three(){
    // Question Three
    cout << "Question Three" << endl;

    // Title of Game
    cout << "Path to Adventure" << endl;
    cout << "------------------------------" << endl;
    
    // Set user choice variable
    string response;

    // Begins Game - Round 1 of choices
    cout << "------------------------------" << endl;
    cout << "You are in between a two-way crossroad." << endl;
    cout << "The path to your left goes to a river, the path to your right goes to a cave." << endl;
    cout << "Which way would you like to go? (Left or Right)" << endl;
    cout << "------------------------------" << endl;
    cin >> response;
    cout << "------------------------------" << endl;

    // Determine Result based on user choice
    if (response == "Left")
    {      

        // Round Two of Choices
        cout << "------------------------------" << endl;
        cout << "The river glistens, and past it shows a village." << endl;
        cout << "You don't know if they like outsiders or not, but it may be worth a try?" << endl;
        cout << "On the other hand, there is a valley down the river. It's filled with multiple fruits you could eat." << endl;
        cout << "There's also a pond of fish, and a small tent." << endl;
        cout << "Which way would you like to go? (Village or Down)" << endl;
        cout << "------------------------------" << endl;
        cin  >> response;
        cout << "------------------------------" << endl;

        if (response == "Village"){
            cout << "------------------------------" << endl;
            cout << "Just like you expected. The villagers aren't so friendly after all." << endl;
            cout << "They lock you in their jail until the end of time." << endl;
            cout << "Game Over." << endl;
            cout << "------------------------------" << endl;
        }
        else if (response == "Down"){

            // Round Three of Choices
            cout << "------------------------------" << endl;
            cout << "You come across a lone fisherman within the tent." << endl;
            cout << "He says that he was just about to start getting some fish for dinner." << endl;
            cout << "He asks if you want to fish with him." << endl;
            cout << "What do you say? (Yes or No)" << endl;
            cout << "------------------------------" << endl;
            cin  >> response;
            cout << "------------------------------" << endl;

            if (response == "Yes"){
                cout << "He grabs a second fishing rod, and some bait." << endl;
                cout << "You both fish, and he cooks a nice meal for two." << endl;
                cout << "ENDING 1" << endl;
                cout << "Thanks for Playing!" << endl;
                cout << "------------------------------" << endl;
            }
            else if (response == "No"){
                cout << "He nods, but doesn't mind if you stay." << endl;
                cout << "You're happy with that, and sit and watch him fish some bass." << endl;
                cout << "ENDING 2" << endl;
                cout << "Thanks for Playing!" << endl;
                cout << "------------------------------" << endl;
            }   
        }
    }
    else if (response == "Right")
    {
        cout << "Bad luck. As you enter the cave, a bear appears with its terrifying claws." << endl;
        cout << "Game Over." << endl;
    }

}

void Question_Four(){
    // Question Four
    cout << "Question 4" << endl;

    srand(time(0));

    int answer;  // User Answer

    // Generate first and second numbers within range 0-9
    int first_number = (rand() % 9) + 1;
    int second_number = (rand() % 9) + 1;
    int sum = first_number + second_number;

    // Ask the Question
    // In the form of a simple addition problem.
    cout << "What is " << first_number << " + " << second_number << "?" << endl;
    cin >> answer;

    // Determine if answer is right or wrong
    if (answer == sum){
        cout << "Correct." << endl;
    } 
    else if (answer != sum)
    {
        cout << "Incorrect." << endl;
    }
}

int main(){
    // Ask for Question Number
    int question_number; 

    cout << "Which Question? (1, 2, 3, 4)" << endl;
    cin >> question_number;

    if (question_number == 1)
    {
        Question_One();
    } 
    else if (question_number == 2)
    {
        Question_Two();
    }
    else if (question_number == 3)
    {
        Question_Three();
    }
    else if (question_number == 4)
    {
        Question_Four();
    }


    return 0;
}