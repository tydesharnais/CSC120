#include <iostream>
#include <array>

using namespace std;

//Write a declaration for a 2x3 array "t"


int main(){

    //Declare the constants 
    const size_t rows{2};
    const size_t columns{3};

    //Declaration of 2D array "t"
    //2b. t has 2 rows
    //2c. t has 3 columns 
    //2d. t has 6 elements 
    //2e-2f. tarray.jpg has diagram 

    array<array<int, columns>, rows>t{1,2,3,4,5,6};

    //2g. Setting t[0][1] to 0
    t[0][1]=0;
    //2h. Series of statements to set all elements to 0
    t[0][0] = 0;
    t[0][1] = 0;
    t[0][2] = 0;
    t[1][0] = 0;
    t[1][1] = 0;
    t[1][2] = 0;
    //2i. Nested control loop to set all values to 0
    for (int row =0; row < t.size(); ++row)
    {
        for (int column = 0; column < t[row].size(); ++column)
        {
            t[row][column] = 0;
            cout << "Element [" << row << "][" << column << "] = 0\t" ;
        }
        cout << endl;
    }
    //2j. Nested range-based statement to set all elements in t = 0
    for (auto &i : t)
    {
        for (auto &col : i)
        {
            col = 0;
        }
    }
   
    







    return 0;
}