// CSC 134
// M3T2 
// cowarta
// 03/02/2026
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    int areaOne;
    int areaTwo;
    areaOne  = len1 * wid1;
    areaTwo = len2 * wid2;

    // Print the area
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;

    // Determine which is bigger
    if (areaOne > areaTwo){
        cout << " Rectangle one is bigger" << endl;
    }
    
    else if (areaOne == areaTwo){
       cout << "They are the same size" << endl; 
    }

    else if (areaTwo > areaOne){
        cout << "Rectangle two is bigger" << endl;
    }
        cout << "Thanks for using the program" << endl;
    return 0;
}