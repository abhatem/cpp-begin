// Exercise 06.02.01
// This program passes the address of a variable to a 
//  function, which triples the value pointed to.

#include <iostream>
using namespace std;

void triple_it(int *n);

int main() {
    int n = 15;

    cout << "Value of n before tripling: " << n << endl;

    triple_it(&n);      // Pass address of temp.

    cout << "Value after tripling: " << n << endl;

    system("PAUSE");
    return 0;
}

void triple_it(int *n) {
    *n = *n * 3;
}


