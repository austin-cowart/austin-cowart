/*
CSC 134
M3BONUS
Austin Cowart
03/12/2026

*/

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    // Starting Code 
    // Used for AI
    // Game: Coin Flip

    // Determine Variables 
    int player_choice;     // Choice of Heads or Tails
    int player_score = 0;   // Score of Player
    int winning_score = 5; // Winning Score
    int coin_side;         // Heads or Tails Result (1/2)
    string coin_result;    // Visual Form of coin_side

    

    // Ask for heads or tails
    cout << "Reach " << winning_score << " to Win!" << endl;
    while (player_score < winning_score)
    {
        // Determine result (Heads or Tails)
        srand(time(0));

        int coin_side = (rand() % 2); 
        if (coin_side == 0)
        {
            coin_result = "Heads.";
        }
        else if (coin_side == 1)
        {
            coin_result = "Tails.";
        }

        // Ask for user's choice 
        // of Heads or Tails.
        cout << "What is your choice?" << endl;
        cout << "Type 0 for Heads, or 1 for Tails." << endl;
        cin >> player_choice;
        
        // Present Result
        cout << "The coin landed on " << coin_result << endl;
        if (player_choice == coin_side)
        {
            cout << "You Win!" << endl;
            player_score += 1;
            cout << "player score: " << player_score << endl;
            
            // Win Condition 
            // If player reaches Winning Score
            if (player_score == winning_score)
            {
                cout << "Congratulations!" << endl;
                cout << "Thanks for Playing!" << endl;
            }
        }
        else if (player_choice != coin_side)
        {
            cout << "You Lose!" << endl;
            cout << "Try Again!" << endl;
        }

    }

    return 0;
}