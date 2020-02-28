#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   int accountNumber;
   double balance{0};
   double charges;
   double credits;
   double creditLimits;
   cout << fixed << setprecision(2);
   cout << "Enter Account Number (-1 to Quit)" << endl;
   cin >> accountNumber;
   while(accountNumber != -1)
   {
       cout << "Enter beginning balance: " << endl;
       cin >> balance;
       cout << "Enter total charges: " << endl;
       cin >> charges;
       cout << "Enter total credits: " << endl;
       cin >> credits;
       cout << "Enter credit limit: " << endl;
       cin >> creditLimits;
       balance = (balance + credits) - charges;
       cout << "Balance: " << balance << endl;
       if (balance > creditLimits)
       {
           cout << "Account Number " << accountNumber << endl;
           cout << "You are exceeding the Credit Limit set" << endl;
       }


   }



   return 0;
}