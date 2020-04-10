#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

using namespace std;

//This program generates psuedo-random temperatures, places them into arrays and prints them.
int main(){

    //create the array
    array<float, 100>temperature;

    for (int i=0; i<100; i++)
    {
        float temp = 1+(rand()%100);
        temperature[i] = temp;
        cout << "Element ["<<i<<"] = " <<  temp << endl;
    }
    cout << "Outputting all elements in array" << endl;
    //double-check 
    for (int x= 0; x<100; x++)
    {
        cout << "Temperature ["<<x<<"] = " << temperature[x] << endl;
    }










    return 0;
}