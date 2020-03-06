// Fig. 5.9: DoWhileTest.cpp
// do...while iteration statement.
#include <iostream>
using namespace std;

int main() {
   unsigned int counter{10}; 

   do {
      cout << counter << "  ";
      ++counter;
   } while (counter == 10); // end do...while 

   cout << endl; 
} 