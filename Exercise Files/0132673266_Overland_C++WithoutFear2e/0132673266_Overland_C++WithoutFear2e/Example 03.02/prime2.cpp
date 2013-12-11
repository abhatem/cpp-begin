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

    for (i = 2; i <= sqrt((double) n); i++) {
        if (n % i == 0)
            is_prime = false;
    }

    // Print results

    if (is_prime)
        cout << "Number is prime.";
    else
        cout << "Number is not prime.";

    cout << endl;
    system("PAUSE");
    return 0;
}
