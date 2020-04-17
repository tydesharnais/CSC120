#include <iostream>

using namespace std;

//1b
//int Employee(string,string) has the implementation as if 
//were a function.. the class prototype should look this

class Employee; //Prototype
class Example;

class Example{
//1c.
public:
Example(int y = 10) : data(y) {}
    int getIncrementedData() 
     {
        return ++data;
    }

 int getCount() 
{
    cout << "Data is " << data << endl;
    return count;
}
private:
   int data;
   int count;
};

int main()
{
    Example exObject;
    exObject.getIncrementedData();
    exObject.getCount();


    return 0;
}

//2
//The purpose of the scope resolution operator is