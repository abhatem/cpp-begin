#include <iostream>
using namespace std;

int main() {
    int  n, remainder;

// Get a number from the keyboard. 

    cout << "Enter a number and press ENTER: ";
    cin >> n;

// Get remainder after dividing by 2.

    remainder = n % 2;

// If remainder is 0, the number input is even.

    if (remainder == 0)
        cout << "The number is even.";
    else
        cout << "The number is odd.";

    system("PAUSE");
    return 0;
}
