// Exercise 4.5: Calculate.cpp
// Calculate the sum of the integers from 1 to 10
#include <iostream>
using namespace std;

int main() {
    unsigned int sum{0};
    unsigned int x{0};

    while (x <= 10) { // while x is less than or equal to 10
        sum += x; // add x to sum
        ++x; // increment x
    }

    cout << "The sum is: " << sum << endl;
}