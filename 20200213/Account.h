// Fig. 3.8: Account.h
// Account class with name and balance data members, and a
// constructor and deposit function that each perform validation.
#include <string>
#include <iostream>
#include <iomanip>
class Invoice{
public:
    //Invoice constuctor
    Invoice(std::string partNum, std::string partDis, int initialQuantity, int initialPrice )
        : u_partnum{partNum}, discription{partDis}
        {
            if (initialQuantity > 0)
            {
                quantity = initialQuantity;
            }
            if (initialPrice > 0)
            {
                price = initialPrice;
            }
        }

    int getInvoiceAmount()
    {
        int total = price * quantity;
        return total;
    }
    std::string getpart() const {
        return u_partnum;
    }
    std::string getdisc() const {
        return discription;
    }
    int getquantity() const {
        return quantity;
    }
    int getPrice() const {
        return price;
    }
    // function that sets the name
    void setpart(std::string partNum) {
        u_partnum = partNum;
    }
    void setdisc(std::string partDis) {
        discription = partDis;
    }
    void setquantity(int initialQuantity) {
        quantity = initialQuantity;
    }
    void setprice(int initialPrice) {
        price = initialPrice;
    }


private:
    std::string u_partnum;
    std::string discription;
    int quantity{0};
    int price{0};





};
class Account {
public:
    // Account constructor with two parameters
    Account(std::string accountName, int initialBalance, double initalIntrest)
            : name{accountName} { // assign accountName to data member name

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0)
        { // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
        if (initalIntrest > 0)
        { // if the initialBalance is valid
            intrest = initalIntrest; // assign it to data member balance
        }
    }

    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount)
    {
        if (depositAmount > 0)
        { // if the depositAmount is valid
            balance = balance + depositAmount; // add it to the balance
        }
    }
    void withdrawl(int withdrawlAmount)
    {
        if (balance  - withdrawlAmount > 0)
        {
            if (withdrawlAmount > 0)
            { // if the depositAmount is valid
                balance = balance - withdrawlAmount; // add it to the balance
             }
        }
        else
            {
            std::cout << "You have exceeded your balance." << std::endl;
        }
    }
    void add_intrest()
    {
        balance = balance * intrest;

    }

    // function returns the account balance
    int getBalance() const {
        return balance;
    }
    int getIntrest() const {
        std::cout << std::setprecision(3) << intrest;
        return intrest;
    }
    // function that sets the name
    void setName(std::string accountName) {
        name = accountName;
    }

    // function that returns the name
    std::string getName() const {
        return name;
    }

private:
    std::string name; // account name data member
    int balance{0}; // data member with default initial value
    int intrest{0}; // data member with default intrest rate
}; // end class Account


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
