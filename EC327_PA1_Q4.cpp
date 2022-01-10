#include <iostream>
using namespace std;

int main()
{
    int number; // number to be checked if it's a palindrome
    cout << "Enter a number: ";
    cin >> number;
    int reverse_number = 0; // the program will get the reverse of the number
    int number_to_change = number; // assign number to number_to_change to do operations with it
    while(number_to_change != 0) // as long as number_to_change isn't 0
    {
        int digit_to_add = number_to_change % 10; // get the last digit of the number and assign it to digit_to_add
        reverse_number = (reverse_number * 10) + digit_to_add; // place the last digit to the beginning of reverse_number and keep on adding them next to it to have the number in reverse 
        number_to_change = number_to_change / 10; // get rid of the last digit of the number

    }

    if (reverse_number == number) // if reverse_number and number are equal, number is a palindrome
    {
        cout << "The number " << number << " is a palindrome." << endl;
    }
    else if (reverse_number != number) // if reverse_number and number aren't equal, number isn't a palindrome
    {
        cout << "The number " << number << " is not a palindrome." << endl;
    }
    return 0; // end program by returning 0
}