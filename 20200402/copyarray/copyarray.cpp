#include <iostream>
#include <array>

using namespace std;

//Copy elements of one array and input them into another 
int main(){
    //First array
    array<int, 11> a{3,5,3,5,1,86,35,13,43,32,886};
    //Second array
    array<int, 34> b;

   

    for(int i = 0; i<11; i++)
    {
        cout << a[i] << endl;
    }
    for(int i = 0; i< 11; i++)
    {
        //Setting value of a equal to b 
        a[i] = b[i];

    }
   
    for(int i = 0; i<11; i++)
    {
        cout << b[i] << endl;
    }


    return 0;
}