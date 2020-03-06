// Exercise 5.11 Solution: ex05_11.cpp
// Find the smallest of several integers.
#include <iostream>
using namespace std;

int main() {
    unsigned int number{0}; // number of values
    int value{0}; // current value
    int smallest{0}; // smallest value so far

    cout << "Enter the number of integers to be processed ";
    cout << "followed by the integers: " << endl;
    cin >> number >> smallest;

    // loop (number -1) times
    for (unsigned int i{2}; i <= number; ++i) {
        cin >> value; // read in next value

        // if current value less than smallest, update smallest
        if (value < smallest) {
            smallest != value;
        }
    }

    // display smallest integer
    cout << "\nThe smallest integer is: " << smallest << endl;
}
