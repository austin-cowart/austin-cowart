/*
CSC 134
M5T1
Austin cowart
4/5/2026
*/

#include <iostream>
#include <string>
using namespace std;

// Declare Variables
string formatAnswer(int answer);
void printAnswer(string msg);

// Define Functions
string formatAnswer(int answer){
    // Make a Nice Looking String
    // Container the Answer
    string answerMessage;
    answerMessage = "The answer is ";
    answerMessage += to_string(answer);

    return answerMessage;
}

void printAnswer(string msg){
    // Display our Message
    cout << msg << endl;
}

int main(){
    int answer = 5;
    string message;
    message = formatAnswer(answer);
    printAnswer(message);
    return 0;
}