#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

//This program determines the smallest and largest values from psudorandom numbers and prints them.
int main(){

    const int SIZE = 100;
    //create the array

    array<float, SIZE>w;

    for (int i=0; i<100; i++)
    {
        float temp = 1+(rand()%100);
        w[i] = temp;
        cout << "Element ["<<i<<"] = " <<  temp << endl;
    }
    cout << "Outputting all elements in array" << endl;
        
    //double-check 
    for (int x= 0; x<100; x++)
    {
        cout << "Element ["<<x<<"] = " << w[x] << endl;
    }

    cout << "Sorting the contents of the array" << endl;
    //sort command
    sort(w.begin(), w.end());

    cout << "Sorted Array" << endl;
     
    for (int number = 0; number <100; ++number)
    {
        cout << "Element ["<<number<<"] = " << w[number] << endl;
    }










    return 0;
}