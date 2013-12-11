#include <iostream>
using namespace std;

int main() {
    int  n;

    cout << "Enter an age and press ENTER: ";
    cin >> n;

    if (n > 12 && n < 20)  
        cout << "Subject is a teenager.";
    else
        cout << "Subject is not a teenager.";

    system("PAUSE");
    return 0;
}
