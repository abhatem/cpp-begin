#include <iostream>
using namespace std;

int main() {
    int  n;

// Get a number from the keyboard. 

    cout << "Enter a number and press ENTER: ";
    cin >> n;

// Get remainder after dividing by 2.
// If remainder is 0, the number input is even.

    if (n % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;

    system("PAUSE");
    return 0;
}
