// Exercise 5.12 Solution: ex05_12.cpp
// Calculate and print product of odd integers from 1 to 15.
#include <iostream>
using namespace std;

int main() {
    unsigned int product{1};

    // calculate product
    // increment counter i by 2 for odd numbers
    for (unsigned int i{1}; i <= 15; i += 2) {
        product = i*product;
    }

    // display resulting product
    cout << "Product of the odd integers from 1 to 15 is: "
         << product << endl;
} 
