#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int rand_0toN1(int n);

int hits[5];

int main() {
    int n;
    int i;
    int r;

    srand(time(NULL));      // Set seed for random numbers.

    cout << "Enter number of trials to run and press ENTER: ";
    cin >> n;

    // Run n trials. For each trial, get a number from 0 to 4
    //  and then increment the corresponding element in the
    //  hits array.

    for (i = 1; i <= n; i++) {
        r = rand_0toN1(10);
        hits[r]++;
    }

    // Print all the elements in the hits array, along with
    //  the ratio of hits to the EXPECTED hits (n / 10).

    for (i = 0; i < 10; i++) {
        cout << i << ": " << hits[i] << "      Accuracy: ";
        cout << static_cast<double>(hits[i]) / ((double) n / 10) << endl;
    }

    system("PAUSE");
    return 0;
}

// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1.
//
int rand_0toN1(int n) {
    return rand() % n;
}


