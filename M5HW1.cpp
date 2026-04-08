/*
CSC 134
M5HW1 - Gold
Austin Cowart
*/


#include <iostream>
#include <iomanip>
using namespace std;

// Defining Functions
void choice_question_one();
void choice_question_two();
void choice_question_three();
void choice_question_four();
void choice_question_five();
void choice_exit_program();

int main() {
    // Keep the program running,
    // That showcases all options (Questions 1, 2, 3, 4, 5, and Quit)
    // And asks the user for their input.
    while (true) {
        int choice;
        cout << "Questions" << endl;
        cout << "---------------" << endl;
        cout << "Question 1: Average Rainfall" << endl;
        cout << "Question 2: Volume of a 3D Hypperrectangle" << endl;
        cout << "Question 3: Range of 1 to 10" << endl;
        cout << "QUestion 4: Geometry Calculator" << endl;
        cout << "Question 5: Distance Traveled" << endl;
        cout << "Option 6: Exit" << endl;
        cout << "---------------" << endl;
        cout << "Which Question would you like to see? ";
        cin >> choice;
        cout << "---------------" << endl;
        if (choice == 1){
            choice_question_one();
        } else if (choice == 2){
            choice_question_two();
        } else if (choice == 3){
            choice_question_three();
        } else if (choice == 4){
            choice_question_four();
        } else if (choice == 5){
            choice_question_five();
        } else if (choice == 6){
            choice_exit_program();
        } else {
            cout << "That is not a valid option. " << "Please try again." << endl; 
            cout << "---------------" << endl;
            continue;
        }

    }
    return 0;
}

void choice_question_one(){
    // Assign String variables
    string month_one;
    string month_two;
    string month_three;

    // Assign double variables
    double rainfall_month_one;
    double rainfall_month_two;
    double rainfall_month_three;

    // Ask user for the name of each month,
    // and respective amount of rainfall. 

    // Month One
    cout << "Enter first month: ";
    cin >> month_one;
    cout << "Enter amount of rainfall for " << month_one + ": ";
    cin >> rainfall_month_one;

    // Month Two
    cout << "Enter second month: ";
    cin >> month_two;
    cout << "Enter amount of rainfall for " << month_two + ": ";
    cin >> rainfall_month_two;
    
    // Month Three
    cout << "Enter third month: ";
    cin >> month_three;
    cout << "Enter amount of rainfall for " << month_three + ": ";
    cin >> rainfall_month_three;

    // Calculate and Disaplay Average rainfall for all 3 months
    double average_rainfall;
    average_rainfall = (rainfall_month_one + rainfall_month_two + rainfall_month_three) / 3.0;
    cout << fixed << setprecision(2);

    cout << "The average rainfall for " << month_one + ", " << month_two + ", " <<
    "and " + month_three + " is " << average_rainfall << "." << endl; 
    cout << "---------------\n" << endl;
}

void choice_question_two(){
    cout << "2";
}
void choice_question_three(){
    cout << "3";
}
void choice_question_four(){
    cout << "4";
}
void choice_question_five(){
    cout << "5";
}
void choice_exit_program(){
    cout << "6";
}