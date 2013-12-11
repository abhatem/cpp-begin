#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int  n;   // Number to test for prime-ness
    int  i;   // Loop counter
    int  is_prime;   // Boolean flag

    // Assume that a number is prime until proven otherwise

    is_prime = true;

    // Get a number from the keyboard. 

    cout << "Enter a number and press ENTER: ";
    cin >> n;
    
    // Test for prime-ness by checking for divisibility
    //  by all whole numbers from 2 to sqrt(n).

    i = 2;    
    while (i <= sqrt(static_cast<double>(n))) {
                               // While i is <= sqrt(n),
        if (n % i == 0)        //    If i divides evenly into n,
            is_prime = false;  //       n is not prime.
        i++;                   //    Add 1 to i.
    }

    // Print results

    if (is_prime)
        cout << "Number is prime.";
    else
        cout << "Number is not prime.";

    system("PAUSE");
    return 0;
}
