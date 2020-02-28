#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sales;
    string answer;
    cout << fixed << setprecision(2);
    cout << "Entry [Y/N]: " << endl;
    cin >> answer;
    while (answer == "Y" || "y")
    {
        cout << "Enter sales amount: " << endl;
        cin >> sales;

        double commission = .09 * sales;
        double wage = 200 + commission;
        cout << "Total salary: " << wage << endl;
        cout << "Entry [Y/N]: " << endl;
        cin >> answer;
    }

    return 0;
}