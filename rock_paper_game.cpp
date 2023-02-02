#include <iostream>
#include <stdlib.h>
using namespace std;
// template for c++

void one_player()
{
    srand(time(NULL));
    int randomNumber = rand() % 3 + 1;
    string answer;
    int userAnswer;
    for (;;)
    {
        cin.clear();
        cout << "\t\trock, paper, or scissors? ";
        cin >> answer;
        cout << endl;

        if (!answer.compare("scissors") || !answer.compare("Scissors"))
        {
            userAnswer = 1;
            break;
        }

        if (!answer.compare("rock") || !answer.compare("Rock"))
        {
            userAnswer = 2;
            break;
        }

        if (!answer.compare("paper") || !answer.compare("Paper"))
        {
            userAnswer = 3;
            break;
        }

        else
        {
            cout << "\t\tPlease enter a valid answer." << endl;
        }

    } // infinite for loop to get user to enter valid answer
    cout << "\t\t-----------------------------" << endl;
    if (randomNumber == 1)
    {
        if (userAnswer == 1)
        {
            cout << "\t\tIt's a tie! Computer chose scissors! "<<endl;
        }

        else if (userAnswer == 2)
        {
            cout << "\t\tYou WIN! The computer chose scissors!"<<endl;
        }

        else if (userAnswer == 3)
        {
            cout << "\t\tYou LOSE! The computer chose scissors!"<<endl;
        }

    } // result if computer chooses scissors

    else if (randomNumber == 2)
    {

        if (userAnswer == 1)
        {
            cout << "\t\tYou LOSE! The computer chose rock!"<<endl;
        }

        else if (userAnswer == 2)
        {
            cout << "\t\tIt's a tie! The computer also chose rock!"<<endl;
        }

        else if (userAnswer == 3)
        {
            cout << "\t\tYou WIN! The computer chose rock!"<<endl;
        }

    } // result if computer chooses rock

    else if (randomNumber == 3)
    {

        if (userAnswer == 1)
        {
            cout << "\t\tYou WIN! The computer chose paper!"<<endl;
        }

        else if (userAnswer == 2)
        {
            cout << "\t\tYou LOSE! The computer chose paper!"<<endl;
        }

        else if (userAnswer == 3)
        {
            cout << "\t\tIt's a TIE! The computer chose paper!"<<endl;
        }
    }
    system("pause");
}

void two_player(){
    string pone; 
    string ptwo; 
    string r = "r"; 
    string p = "p";
    string s = "s"; 

    cout << "Rock, Paper, Scissors Game\n"; 
    cout << "\nPlayer One, please enter your move: ('p' for Paper, 'r' for Rock, 's' for Scissor)";  

    cin >> pone; 

    cout << "\nPlayer Two, please enter your move: ('p' for Paper, 'r' for Rock, 's' for Scissor)"; 

    cin >> ptwo; 

    if (pone == ptwo) 
    { 
        cout <<"\nThere is a tie"<<endl; 
    } 

    if ( pone == r && ptwo == p) 
    { 
        cout << "\nPaper wraps rock, Player 1 win"; 
    } 
    else if (pone == r && ptwo == s) 
    { 
        cout << "\nRock smashes scissors, player 1 win"; 
    } 

    if (pone == p && ptwo == r) 
    { 
        cout <<"\nPaper wraps rock, player 1 win"; 
    } 
    else if ( pone == p && ptwo == s) 
    { 
        cout <<"\nScissors cut paper, player 2 win"; 
    } 

    if ( pone == r && ptwo == p) 
    { 
        cout << "\nPaper wraps rock, Player 1 win"; 
    } 
    else if (pone == r && ptwo == s) 
    { 
        cout << "\nRock smashes scissors, player 1 win"; 
    } 

    if (pone == p && ptwo == r) 
    { 
        cout <<"\nPaper wraps rock, player 1 win"; 
    } 
    else if ( pone == p && ptwo == s) 
    { 
        cout <<"\nScissors cut paper, player 2 win"; 
    } 

    if ( ptwo == s && pone == r) 
    { 
        cout <<"\nScissors cut paper, player 1 win"; 
    } 
    else if (ptwo == s && pone == p) 
    { 
        cout <<"\nRock smashes scissors, player 2 win "; 
    }  



    system("pause");
    
}

int main()
{   int choice;
    do
    {   system("cls");
        cout<<endl; 
        cout << "\t\t------------------------------------" << endl;
        cout << "\t\t Welcome to Rock, Paper, Scissors!" << endl;
        cout << "\t\t------------------------------------" << endl;
        cout << "\t\t1. One Player game" << endl;
        cout << "\t\t2. Two Player game" << endl;
        cout << "\t\t3. Exit" << endl;
        cout << "\t\t------------------------------------" << endl;
        cout << "\t\tPlease enter your choice: ";
        
        cin >> choice;
        system("cls");
        switch (choice)
        {
        case 1:
            cout << "\t\t\t One Player game" << endl;
            cout << "\t\t------------------------------------" << endl;
            one_player();
            break;
        case 2:
            cout << "\t\t\t Two Player game" << endl;
            cout << "\t\t------------------------------------" << endl;
            two_player();
            break;
        case 3:
            cout << "\t\t\t Exiting..." << endl;
            break;

        default:
            cout << "\t\tInvalid choice" << endl;
            break;
        }
    } while (choice != 3);
    // result if computer chooses paper
}