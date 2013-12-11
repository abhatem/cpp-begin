#include <iostream>
using namespace std;

int main() {
    int  i, n;

// Get a number from the keyboard and initialize i. 

    cout << "Enter a number and press ENTER: ";
    cin >> n;

    for (i = 1; i <= n; i++)   //   For i = 1 to n,
        cout << i << " ";      //       Print i.

    cout << endl;
    system("PAUSE");
    return 0;
}

