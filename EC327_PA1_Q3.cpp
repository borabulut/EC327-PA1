#include <iostream>
using namespace std;

int main()
{
    int number1; // first integer to be entered
    int number2; // second integer to be entered
    cout << "Enter two positive integers: ";
    cin >> number1;
    cin >> number2;
    int counter = 0; // create counter to count the times the digits are not the same in both numbers
    int number1_change = number1; // assign number1 to number1_change to do operations with it
    int number2_change = number2; // assign number2 to number2_change to do operations with it
    while (number1_change != 0 && number2_change != 0) // as long as both numbers aren't 0
    {
        int last_digit_1 = number1_change % 16; // calculate the last digit in hex
        int last_digit_2 = number2_change % 16; // calculate the last digit in hex
        if (last_digit_1 != last_digit_2) // if last digits aren't the same in hex, increment counter
        {
            counter++;
        }
        number1_change = number1_change / 16; // get rid of the last digit in hex
        number2_change = number2_change / 16; // get rid of the last digit in hex
        while (number2_change != 0 && number1_change == 0) // if second number still has digits left but fırst one is 0, get rid of the digits in second number while incrementing counter
        {
            number2_change = number2_change / 16;
            counter++;
        }
        while (number1_change != 0 && number2_change == 0) // if first number still has digits left but second one is 0, get rid of the digits in first number while incrementing counter
        {
            number1_change = number1_change / 16;
            counter++;
        }
    }
    cout << "Hamming distance between " << number1 << " and " << number2 << " when numbers are in hex format is: " << counter << endl;
    return 0; // end program by returning 0
}