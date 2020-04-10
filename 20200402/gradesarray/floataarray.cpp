#include <iostream>
#include <array>

using namespace std;

int main(){

    //Create an array grades
    array<float, 10>grades;

    float grade;

    //Take in a grade and print it out
    cout << "Enter a grade: " << endl;
    cin >> grade;
    grades[4] = grade;

    cout << "Grade in element 4: " << grades[4] << endl;


    return 0;

}