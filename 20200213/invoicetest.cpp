//
// Created by tyler.desharnais on 2/13/2020.
//
#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    //Class init
    Invoice invoice1{"2039455346", "Battle Axe", 5, 23};

    //Display the basket
    cout << "Part Number: " << invoice1.getpart() << endl;
    cout << "Part Discription: " << invoice1.getdisc() << endl;
    cout << "Quantity: " << invoice1.getquantity()  << endl;
    cout << "Price: " << invoice1.getPrice() << endl;

    cout << "Total for today:" << invoice1.getInvoiceAmount() << endl;



    return 0;
}


