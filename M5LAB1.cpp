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
    cout << "Four Paths" << endl;
    // Load the Main Menu
    main_menu();
    // We are done when we return here.
    cout << "-------------" << endl;
    cout << "Thanks for Playing!" << endl;
    cout << "-------------" << endl;
    return 0; // Finish with No Errors
}

void main_menu() {
    // Simple Menu, allows user to choose 1, 2, 3, or 4
    // Or to Quit.
    cout << "-------------" << endl;
    cout << "Main Menu" << endl;
    cout << "-------------" << endl;
    cout << "You're in the middle of a four-way crossroad." << endl;
    cout << "Would you like to:" << endl;
    cout << "1. Travel forwards towards a river" << endl;
    cout << "2. Go right into a cave" << endl;
    cout << "3. Go left into the forest" << endl;
    cout << "4. Turn back the way you came" << endl;
    cout << "5. [Quit]" << endl;
    cout << "-------------" << endl;
    cout << "Choice: ";
    int choice;
    cin >> choice;
    cout << "-------------" << endl;
    if (choice == 1) {
        choice_cross_river();
    } else if (choice == 2) {
        choice_enter_cave(); 
    } else if (choice == 3) {
        choice_enter_forest();
    } else if (choice == 4) {
        choice_turn_back();
    } else if (choice == 5){
        cout << "Quitting Game..." << endl;
        return; // Goes back to main()
    } else {
        cout << "-------------" << endl;
        cout << "That is not a valid choice. Please try again." << endl;
        cout << "-------------" << endl;
        cin.ignore(); // Clear user input
        main_menu(); // Try Again
    }

}   

// Choice 1 - Cross the River
void choice_cross_river() { 
    cout << "-------------" << endl;
    cout << "Crossing the River" << endl;
    cout << "-------------" << endl;
    cout << "You sucessfully managed to cross the river," << endl;
    cout << "And came across a village!" << endl;
    cout << "-------------" << endl;
    return;
}

// Choice 2 - Enter the Cave
void choice_enter_cave() { 
    cout << "-------------" << endl;
    cout << "Entering the Cave" << endl;
    cout << "-------------" << endl;
    cout << "You walked into the deep, dark cave," << endl;
    cout << "and came across a bear!" << endl;
    cout << "-------------" << endl;
    return;
}

// Choice 3 - Enter the Forest
void choice_enter_forest() {
    cout << "-------------" << endl;
    cout << "Entering the Forest" << endl;
    cout << "-------------" << endl;
    cout << "You enter the thriving forest," << endl;
    cout << "and found lots of fruits, berries and wildlife!" << endl;
    cout << "You don't know which berries are edible, though." << endl;
    cout << "-------------" << endl;
    return;
}

// Choice 4 - Turn Back
void choice_turn_back() {
    cout << "-------------" << endl;
    cout << "Turning Back" << endl;
    cout << "-------------" << endl;
    cout << "You decide to go back," << endl;
    cout << "not knowing what could await you." << endl;
    cout << "-------------" << endl;
    return;
}