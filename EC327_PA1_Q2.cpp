#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(NULL)); // initiate the random seed
    cout << "Choose Rock (0), Paper (1), or Scissors (2): ";
    int input; // user input which is either 0, 1, or 2
    cin >> input;
    int comp_chooses = rand() % 3; // randomly choose between 0 and 2
    if (comp_chooses == 0) // output the computer selection based on the random number
    {
        cout << "Computer chooses: Rock" << endl;
    }
    else if (comp_chooses == 1)
    {
        cout << "Computer chooses: Paper" << endl;
    }
    else if (comp_chooses == 2)
    {
        cout << "Computer chooses: Scissors" << endl;
    }
    if (comp_chooses == input) // if computer and user pick the same, output tie
    {
        cout << "You tie!" << endl;
    }
    else if (comp_chooses == 0 && input == 1) // other cases where user and computer pick different moves, output is done accordingly
    {
        cout << "You win!" << endl;
    }
    else if (comp_chooses == 0 && input == 2)
    {
        cout << "You lose!" << endl;
    }
    else if (comp_chooses == 1 && input == 0)
    {
        cout << "You lose!" << endl;
    }
    else if (comp_chooses == 1 && input == 2)
    {
        cout << "You win!" << endl;
    }
    else if (comp_chooses == 2 && input == 0)
    {
        cout << "You win!" << endl;
    }
    else
    {
        cout << "You lose!" << endl;
    }
    return 0; // end the program by returning 0
}