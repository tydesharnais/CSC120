#include <iostream>

using namespace std;

int main()
{
    unsigned int totalMpg = 0;
    unsigned int totalMiles = 0;
    unsigned int totalGallons = 0;
    unsigned int tripMiles = 0;
    unsigned int tripGallons = 0;
    unsigned int tripMPG = 0;

    cout << "Enter Miles driven (-1 to quit): " << endl;
    cin >> tripMiles;

    while (tripMiles != -1)
    {
        cout << "Enter how many gallons used: " << endl;
        cin >> tripGallons;
        tripMPG = tripMiles / tripGallons;
        totalMiles += tripMiles;
        totalGallons += tripGallons;
        cout << "MPG this trip: " << tripMPG << endl;
        totalMpg = totalMiles / totalGallons;
        cout << "Total MPG: " << totalMpg << endl;
    }
    return 0;
}