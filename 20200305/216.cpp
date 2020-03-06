// Exercise 2.16 Solution: ex02_16.cpp
#include <iostream> // allows program to perform input and output
using namespace std; // program uses names from the std namespace

int main()
{
    int number1{0}; // first integer read from user
    int number2{0}; // second integer read from user

    cout << "Enter two integers: "; // prompt user for data
    cin >> number1 >> number2; // read values from user

    // output the results
    cout << "The sum is " << number1 + number2
            << "\nThe product is " << number1 * number2
            << "\nThe difference is " << number1 - number2
            << "\nThe quotient is " << number1 / number2 << endl;
}