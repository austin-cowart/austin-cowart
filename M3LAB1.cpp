/*
CSC 134
M3LAB1
Austin Cowart
03/03/2026
*/

// Complier Directives
// Required for program to run
#include <iostream>
using namespace std;

// Four Paths
// Provides Results depending on which direction you go
// Directions: Right, Left, Forwards, Backwards

void right_path(){
    // This function is called if the user chooses to go right.
    cout << "You see a flowing river filled with many kinds of beautiful fish." << endl;
}

void left_path(){
    // This function is called if the user chooses to go left.
    cout << "You come across a cabin with lights present on the porch." << endl;
}

void forward_path(){
    // This function is called if the user chooses to go fowards.
    cout << "You see a large kingdom towering above you. You feel scared." << endl;
}

void backward_path(){
    // This function is called if the user chooses to go backwards.
    cout << "You come across a large, snowy mountain. The wind blows heavily in your direction." << endl;
    cout << "A dirt path leading directly to the summit." << endl;
}

int main(){
    // Four Path Journey
    // Each Direction has a different result

    // Declare variable (Direction) we need
    string path_direction;

    // Ask what direction
    cout << "You are in a four-way crossroad." << endl;
    cout << "Which way do you wish to go?" << endl;
    cout << "Type either Left, Right, Foward, or Backward: ";
    cin >> path_direction;

    // Using if, make a decision
    // Based on what direction user goes.

    if (path_direction == "Right") {
        right_path();
    } else if (path_direction == "Left") {
        left_path();
    } else if (path_direction == "Forward") {
        forward_path();
    } else if (path_direction == "Backward") {
        backward_path();
    } else {
        cout << "Sorry, that is not a valid direction." << endl;
    }

    // Finish 
    cout << "Thanks for playing!" << endl; // Runs this line, no matter the user input.
    return 0; // No errors
}
