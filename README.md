# PA1
Programming Assignment 1

Total: 100 points
• You may use any development environment you wish, as long as it is ANSI C++ compatible. Please
make sure your code compiles and runs properly under the Linux environment on the PHO307/305 (or
eng-grid) machines before submitting.
• PAs may be submitted up to a week late at the cost of a 30% fixed penalty (e.g., submitting a day late
and a week late is equivalent). It is in your best interest to complete as many PA questions as possible
before the deadline. If you have missing questions in your original submission, you may complete and
submit the missing solutions during the following week. Any submissions after the deadline will be
subject to the 30% penalty. No credit will be given to solutions submitted after the 1-week late
submission period following the deadline.
• Please make sure to follow the assignment submission guidelines for GitHub. These will be posted in a
separate document.
Please write C++ code for solving the following problems related to data types, operations, if
statements, simple loops, and basic functions (Chapters 2-3-4-5-6 of the textbook by Forouzan).

# Q1: Shortest Distance from a Point to a Line [20 points]
Write a program that reads three x, y coordinates from the console (STDIN). The first two
coordinates will be used to compute an equation of a straight line passing through each
coordinate. The program should then calculate the shortest distance from the third coordinate
to the line and print the result to the console (STDOUT). You may use the internet to learn the
equations but NOT get code.

# Q2: Rock, Paper, Scissors [20 points]
Write a program to play “rock, paper, scissors”. In this game, you first prompt the user to choose “rock,
paper, or scissors”. After this, the computer should randomly generate one of these three. Then you
should display the choice of the computer and determine the winner (rock beats scissors, scissors beat
paper, paper beats rock).

# Q3. Hamming Distance [25 points]
In information theory, the Hamming distance between two sequences of equal length is the number of
positions at which the corresponding symbols are different. Put another way, it measures the minimum
number of substitutions required to change one string into the other, or the number of errors that
transform one string into the other.
Examples:
The Hamming distance between:
• "toned" and "roses" is 3.
• 1011101 and 1001001 is 2.
• 2173896 and 2233796 is 3.
(Description above is from Wikipedia: http://en.wikipedia.org/wiki/Hamming_distance )
Write a program that prompts the user to enter two positive integers (in decimal; up to 32-bits of
precision) and computes the Hamming distance between the two numbers when the numbers are
represented in base-16 (hex format). The program then displays the Hamming distance on the screen.

# Q4. Palindromic Number Strings [10 points]
A palindromic number (also known as a numeral palindrome or a numeric palindrome) is a number
that remains the same when its digits are reversed. Like 16461 or 123321.
Write a program that prompts the user to enter a number string and determines whether or not the
number is a palindrome. The number entered by the user should only contain digits 0-9 and should
return false if any invalid characters are entered.

# Q5. Letter Conversion [25 points]
Write code that asks the user to enter a character. Then the program asks the user to enter a nonnegative integer offset. This program adds the offset to the character to produce a new ASCII value. This
value should then be displayed. If the offset is 0 and the character is a letter, the program should change
the case of the letter. (“Change case” means that a lowercase letter should be converted to uppercase,
and an uppercase letter should be changed to lowercase.) If the offset is 0 but the character is not a
letter, the same character should be displayed. 

# Submission Details
Each program should be a single file. Please use the file names Q1.cpp, Q2.cpp, etc. for questions 1-5,
respectively. Make sure to comment your code. We will provide more information on how to submit
this to GitHub (where all PAs for this semester will be submitted). Do NOT submit your executable files
(a.out or others). We only need the source code.

