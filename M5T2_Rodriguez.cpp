// CSC 134 - 0901
// M5T2 - More Practice with Functions
// Name: Josue Rodriguez
// Date: 11/04/2025
// Goal: Use both void and value-returning functions to list numbers 1–10 and their squares.

#include <iostream>
using namespace std;

// Function prototypes
int square(int n);                      // returns the square of n
void printAnswerLine(int number, int result);  // prints a formatted output line

// ---------------- Main Function ----------------
int main() {
    cout << "Number   Square" << endl;
    cout << "----------------" << endl;

    int number = 1;
    int result;

    while (number <= 10) {
        result = square(number);                 // call value-returning function
        printAnswerLine(number, result);         // call void function
        number++;
    }

    cout << "----------------" << endl;
    cout << "End of table." << endl;

    return 0;
}

// ---------------- Function Definitions ----------------

// Returns the square of an integer
int square(int n) {
    return n * n;
}

// Prints one formatted line (void function)
void printAnswerLine(int number, int result) {
    cout << number << " squared is " << result << endl;
}
