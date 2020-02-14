#include <iostream>


    // Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

    using namespace std;

    int main()
    {
        Account account1{"Jane Green", 50, 1.23};
        Account account2{"John Blue", 3, 0.05};

        // display initial balance of each object
        cout << "account1: " << account1.getName() << " balance is $"
             << account1.getBalance() << " Intrest rate (percentage): " << account1.getIntrest();
        cout << "\naccount2: " << account2.getName() << " balance is $"
             << account2.getBalance() << " Intrest rate (percentage): " << account2.getIntrest();

        cout << "\n\nEnter deposit amount for account1: "; // prompt
        int depositAmount;
        cin >> depositAmount; // obtain user input
        cout << "adding " << depositAmount << " to account1 balance";
        account1.deposit(depositAmount); // add to account1's balance

        // display balances
        cout << "\n\naccount1: " << account1.getName() << " balance is $"
             << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
             << account2.getBalance();

        cout << "\n\nEnter deposit amount for account2: "; // prompt
        cin >> depositAmount; // obtain user input
        cout << "adding " << depositAmount << " to account2 balance";
        account2.deposit(depositAmount); // add to account2 balance

        // display balances
        cout << "\n\naccount1: " << account1.getName() << " balance is $"
             << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
             << account2.getBalance() << endl;


        cout << "\n\nApply raise to account1?(Y/N): "; // prompt
        string raise;
        cin >> raise; // obtain user input
        if (raise == "Y" || "Yes")
        {
            account1.add_intrest();
            cout << "Adding" << account1.getIntrest() << "to account1 balence";

        }
        else if (raise == "N" || "No")
        {
            cout << "No raise applied." << endl;
        }
        else
        {
            cout << "Error Occured." << endl;
        }

        // display balances
        cout << "\n\naccount1: " << account1.getName() << " balance is $"
             << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
             << account2.getBalance();

        cout << "\n\nEnter withdrawl amount for account2: "; // prompt
        int withdrawlAmount;
        cin >> withdrawlAmount; // obtain user input
        cout << "subtracting " << withdrawlAmount << " to account2 balance";
        account1.withdrawl(withdrawlAmount); // subtract to account1's balance

        // display balances
        cout << "\n\naccount1: " << account1.getName() << " balance is $"
             << account1.getBalance();
        cout << "\naccount2: " << account2.getName() << " balance is $"
             << account2.getBalance();
    }

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
