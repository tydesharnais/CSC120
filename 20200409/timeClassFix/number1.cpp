#include <iostream>

using namespace std;

//1a
//Correct call of time class
class Time{

public:
    void coolsaying()
    {
        cout << "Preaching to the choir" << endl;
    }
 //Correct destructor of the time class
    ~Time();

};

Time::~Time(){
    cout << "Destroyed object" << endl;
}

int main()
{
    Time timeObj;
    timeObj.coolsaying();

    return 0;

}