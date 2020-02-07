#include <iostream>

using namespace std;
int three_product(int x, int y, int z)
{
    int total;
    total = x * y * z;
    return total;
}

int two_product(int x, int y)
{
    int c;
    c = x * y;
    return c;
}


int main()
{
    int a, b;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter another number: " << endl;
    cin >> b;
    int x, y, z;

    cout << "The Product of Number A: " << a << " and  Number B: " << b << ": " << two_product(a, b) << endl;
    // This program computes payroll calculations

    cout << "This new program computes payroll calculations." << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "|        CALCULATING THE PRODUCT OF 3 INTERGERS       |" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Give me three different intergers with enter: " << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << "The Product of Number A: " << a << " and  Number B: " << b << " and  Number C: : " << three_product(x, y, z) << endl;
    return 0;
}
