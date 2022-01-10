#include <iostream>
using namespace std;


int main()
{
    char input_char; // character to obtain from user
    int offset; // offset number to obtain from user
    char result_char; // character to output
    cout << "Enter character: ";
    cin >> input_char;
    cout << "Offset (enter 0 to convert case): ";
    cin >> offset;
    if (offset == 0 && input_char >= 65 && input_char <= 90) // if offset is 0 and letter is uppercase, make it lowercase
    {
        offset = 32;
        result_char = input_char + offset;
    }
    else if (offset == 0 && input_char >= 97 && input_char <= 122) // if offset is 0 and letter is lowercase, make it uppercase
    {
        offset = -32;
        result_char = input_char + offset;
    }
    else if (offset == 0 && !(input_char >= 97) && !(input_char <= 122) && !(input_char >= 65) && !(input_char <= 90)) // if offset is 0 and character is not a letter, keep it as it is
    {
        result_char = input_char;
    }
    else // if above conditions aren't satisfied, output error and end the program
    {
        cout << "Error!" << endl;
        return 0;
    }
    result_char = input_char + offset; // change the letter by taking into account the offset
    cout << "New character: " << result_char << endl;
    return 0; // end the program by returning 0
}