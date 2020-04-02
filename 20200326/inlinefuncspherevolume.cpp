#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

inline double sphereVolume(const double radius); //function prototype


int main(){

cout << "Please enter a Sphere radius to calculate" << endl;
double input;
cin >> input;
cout << "The number you inputted was: " << input << endl;
cout << "Volume of Sphere " << sphereVolume(input) << endl;


return 0;
}

inline double sphereVolume(const double radius) //constant cause shouldn't change 
{
	double ans = (4.0/3.0*3.14159*pow(radius,3)); //formula for a sphere
	return ans;
}


