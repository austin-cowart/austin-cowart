/*
CSC 134
M5LAB
Austin Cowart
4/5/2026
*/

//M5LAB - Choose Your Own Adventure

#include <iostream>
using namespace std;

// Function Protoypes
void main_menu();
void choice_cross_river();
void choice_enter_cave();
void choice_turn_back();
void choice_enter_forest();

int main() {
    cout << "Game Title" << endl;
    // Load the Main Menu
    main_menu();
    // We are done when we return here.
    cout << "Thanks for Playing!" << endl;
    return 0; // No Errors
}

void main_menu() {
    // Simple Menu, allows user to choose 1, 2, 3, or 4
    // Or to Quit.
    cout << "-------------" << endl;
    cout << "Main Menu" << endl;
    cout << "-------------" << endl;
    cout << "You're in the middle of a four-way crossroad." << endl;
    cout << "Would you like to:" << endl;
    cout << " 1. Travel forwards towards a river" << endl;
    cout << "2. Go right into a cave" << endl;
    cout << "3. Go left into the forest" << endl;
    cout << "4. Turn back the way you came" << endl;
    cout << "5. [Quit]" << endl;
    cout << "Choice: " << endl;
    int choice;
    cin >> choice;
    if (choice == 1) {
        choice_cross_river();
    } else if (choice == 2) {
        choice_enter_cave(); 
    } else if (choice == 3) 
        choice_enter_forest();
    } else if (choice == 4) {
        choice_turn_back();
    } else if (choice == 5){
        cout << "Quitting Game..." << endl;
        return; // Goes back to main()
    } else {
        cout << "That is not a valid choice. Please try again." << endl;
        cin.ignore(); // Clear user input
        main_menu();
    }

}   

