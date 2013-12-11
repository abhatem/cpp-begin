#include <iostream>
using namespace std;

int main() {
    int  i, n;

// Get a number from the keyboard and initialize i. 

    cout << "Enter a number and press ENTER: ";
    cin >> n;
    i = 1;

    while (i <= n) {        // While i less than or equal to n,
        cout << i << " ";   //   Print i,
        i = i + 1;          //   Add 1 to i.
    }

    system("PAUSE");
    return 0;
}

