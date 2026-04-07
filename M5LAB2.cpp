/*
CSC 134
M5LAB2
Austin Cowart
4/6/2026
*/

#include <iostream>
using namespace std;

// Establish Functions
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    // This program calculates the area of a rectangle.

    double length,  // The Rectangles Length
           width,   // The Rectangles Width
           area;    // The Rectangles Area

    // Get the rectangles length.
    length = getLength();

    // Get the rectangles width.
    width = getWidth();

    // Get the rectangles area.
    area = getArea(length, width);

    // Display the rectangles area.
    displayData(length, width, area);

    return 0;
}

double getLength() {
    // Ask user for length of rectangle.
    double length;
    cout << "What is the length of the rectangle? ";
    cin >> length;  
    return length;
}

double getWidth() {
    // Ask user for width of rectangle.
    double width;
    cout << "What is the width of the rectangle? ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    // Calculate the area of the rectangle.
    double area;
    area = (length * width);
    return area;
}

void displayData(double length, double width, double area) {
    // Display the Data of the Rectangle.
    cout << "Rectangle Length: " << length << endl;
    cout << "Rectangle Width: " << width << endl;
    cout << "Rectangle Area: " << area << endl;
    return;
}