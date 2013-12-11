#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int rand_0toN1(int n);

int main() {
    int n, i;
    int r;
    
    srand(time(NULL)); // Set a seed for random-num. generation.

    cout << "Enter number of dice to roll: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        r = rand_0toN1(6) + 1;    // Get a number from 1 to 6
        cout << r << " ";         // Print it out
    }

    return 0;
}

// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1, giving each
//  integer an equal probability.
//
int rand_0toN1(int n) {
    return rand() % n;
}
