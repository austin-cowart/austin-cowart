/*
CSC 134
M5HW1 - Gold
Austin Cowart
04/08/2026
*/


#include <iostream>
#include <iomanip>
using namespace std;

// Initializing Functions [ Question Numbers ]
void choice_question_one();
void choice_question_two();
void choice_question_three();
void choice_question_four();
void choice_question_five();
void choice_exit_program();

// Initizaling Functions [Question 2]
double block_width();
double block_length();
double block_height();
void calculate_block_volume(double width, double length, double height);

// Initalizing Functions [Question 4]
double getRadius();
double getCircleArea(double r, double pi);
void displayCircleArea(double area);

double getRectangleLength();
double getRectangleWidth();
double getRectangleArea(double length, double width);
void displayRectangleArea(double area);

double getTriangleBase();
double getTriangleHeight();
double getTriangleArea(double base, double height);
void displayTriangleArea(double area);

// Main
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
        cout << "Question 4: Geometry Calculator" << endl;
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
            break;
        } else {
            cout << "That is not a valid option. " << endl;
            cout << "Please try again using a value from 1 through 6." << endl; 
            cout << "---------------" << endl;
            continue;
        }

    }
    return 0;
}

// Question One
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


// Question Two
void choice_question_two(){
    cout << "Question 2: Volume of a 3D Hypperrectangle" << endl;
    
    // Assign calculating variables
    double width,  // Width of the block
           length, // Length of the block
           height; // Height of the block
    
    width = block_width();
    length = block_length();
    height = block_height();
    if (width <= 0 || length <= 0 || height <= 0){
        cout << "The width, length and height must be greater than 0." << endl;
    }

    // Calculate and Display volume of the "block".
    calculate_block_volume(width, length, height);

    return; // Return to Question selection.
}


// Defining Functions [Question 2]
double block_width() {
    double width;
    cout << "What is the width of the block? ";
    cin >> width;
    return width;

}

double block_length(){
    double length;
    cout << "What is the length of the block? ";
    cin >> length;
    return length;

}
double block_height(){
    double height;
    cout << "What is the height of the block? ";
    cin >> height;
    return height;
}
void calculate_block_volume(double width, double length, double height) {
    // Calculate the volume of the "block".
    double volume;
    volume = (width * length * height);
    cout << "Block Volume: " << volume << endl;
}

// Question Three
void choice_question_three(){
    cout << "Question 3: Range of 1 to 10" << endl;

    // Declare variables
    int number; // Number assigned to a roman numerial
    cout << "Enter a number (1 - 10): ";
    cin >> number;


    // Check for user input error
    if (number < 1 or number > 10){
        cout << "That is an invalid value. " << "Please try a value between 1 and 10." << endl; 
        return;
    } else { 
        switch (number){
            case 1: 
                cout << "The Roman numeral version of 1 is I." << endl;
                return;
            case 2: 
                cout << "The Roman numeral version of 2 is II." << endl;
                return;
            case 3: 
                cout << "The Roman numeral version of 3 is III." << endl;
                return;
            case 4: 
                cout << "The Roman numeral version of 4 is IV." << endl;
                return;
            case 5: 
                cout << "The Roman numeral version of 5 is V." << endl;
                return;
            case 6: 
                cout << "The Roman numeral version of 6 is VI." << endl;
                return;
            case 7: 
                cout << "The Roman numeral version of 7 is VII." << endl;
                return;
            case 8: 
                cout << "The Roman numeral version of 8 is VIII." << endl;
                return;
            case 9: 
                cout << "The Roman numeral version of 9 is IX." << endl;
                return;
            case 10: 
                cout << "The Roman numeral version of 10 is X." << endl;
                return;

        }
    }   
}

// Question Four
void choice_question_four(){
    
    int area_input; // User input for Calculation

    cout << "Question 4: Geometry Calculator" << endl;
    cout << "-------------" << endl;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> area_input;

    if (area_input == 1) {
        double r;                // The radius of the circle
        double pi = 3.14159;     // The value of pi (to the nearest 100 thousandth.)
        double area;             // Area of the circle

        r = getRadius();
        if (r < 0){
            cout << "The radius cannot be less than 0." << endl;
            return;
        } else {
            area = getCircleArea(r, pi);
            displayCircleArea(area);
        }
    
    } else if (area_input == 2){
        double length;
        double width;
        double rectangle_area;

        length = getRectangleLength();
        if (length < 0) {
            cout << "Only enter positive values for length and width." << endl;
            return;
        }
        width = getRectangleWidth();
        if (width < 0) {
            cout << "Only enter positive values for length and width." << endl;
            return;
        }
        rectangle_area = getRectangleArea(length, width);
        displayRectangleArea(rectangle_area);

    } else if (area_input == 3){
        double base;
        double height;
        double triangle_area;

        base = getTriangleBase();
        if (base < 0) {
            cout << "Only enter positive values for the base and height." << endl;
            return;
        }
        height = getTriangleHeight();
        if (height < 0) {
            cout << "Only enter positive values for the base and height." << endl;
            return;
        }
        triangle_area = getTriangleArea(base, height);
        displayTriangleArea(triangle_area);
        return;
    }
    else if (area_input == 4){
        return; // Return to main menu
    }
    else {
        cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
    }
}


// Defining Functions [Question 4]
double getRadius(){
    double r; 
    cout << "What is the radius of the circle?: ";
    cin >> r;
    return r;
}
double getCircleArea(double r, double pi){
    double area;
    area = pi * (r * r);
    return area;
}
void displayCircleArea(double area){
    cout << "The area of the circle is: " << area << endl;
}

double getRectangleLength(){
    double length;
    cout << "What is the length of the rectangle?: ";
    cin >> length;
    return length;
}
double getRectangleWidth(){
    double width;
    cout << "What is the width of the rectangle?: ";
    cin >> width;
    return width;
}
double getRectangleArea(double length, double width){
    double area;
    area = (length * width);
    return area;
}
void displayRectangleArea(double rectangle_area){
    cout << "The area of the rectangle is: " << rectangle_area << endl;
}

double getTriangleBase(){
    double base;
    cout << "What is the base of the triangle?: ";
    cin >> base;
    return base;
}
double getTriangleHeight(){
    double height;
    cout << "What is the height of the triangle?: ";
    cin >> height;
    return height;
}
double getTriangleArea(double base, double height){
    double area;
    area = 0.5 * (base * height);
    return area;
}
void displayTriangleArea(double triangle_area){
    cout << "The area of the triangle is: " << triangle_area << endl;
}

// Question Five
void choice_question_five(){
    cout << "Question 5: Distance Traveled" << endl;
    
    double speed;  // Speed of the vehicle (in miles per hour)
    double time;   // Time traveled for the vehicle (in hours)
    double distance = speed * time; // Total Distance 
    cout << "What is the speed of the vehicle in mph: ";
    cin >> speed;


    // Checks if user inputs speed less than zero,
    // or time less than 1.
    if (speed < 0){
        cout << "Please try again using a speed of value greater than 0." << endl;
        return;
    }
    cout << "How many hours has it traveled?: ";
    cin >> time;
    if (time < 1){
        cout << "Please try again using a time not less than 1 hour." << endl;
        return;
    }

    
    cout << "Hour   " << "Distance Traveled" << endl;
    cout << "--------------------------------" << endl;
    int current_time = 1; // Inital time ( time = 0 )
    while (current_time < time+1){
        distance = speed * current_time;
        cout << current_time << "     " << (distance) << endl;
        current_time++;
        
    }
    return;

}

// Option Six - Exiting Program
void choice_exit_program(){
    cout << "Thanks for using this program!" << endl;
    return;
}