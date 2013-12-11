#include <iostream>
#include <math.h>
using namespace std;

// Function must be declared before being used.
int prime(int n);

int main() {
    int i;

// Set up an infinite loop; break if user enters 0.
// Otherwise, evaluate n from prime-ness.

     while (1) {
         cout << "Enter a number (0 to exit) and press ENTER: ";
         cin >> i;
         if (i == 0)              // If user entered 0, EXIT
             break;               
         if (prime(i))                       // Call prime(i)
            cout << i << " is prime" << endl;
         else
            cout << i << " is not prime" << endl;
     }
     system("PAUSE");
     return 0;
}

// Prime number function. Test divisors from
//  2 to sqrt of n. Return false if a divisor
//  found; otherwise, return true.

int prime(int n) {
    int i;

    for (i = 2; i <= sqrt((double) n); i++) {
        if (n % i == 0)           // If i divides n evenly,
            return false;         //  n is not prime.
    }
    return true;   // If no divisor found, n is prime.
}
