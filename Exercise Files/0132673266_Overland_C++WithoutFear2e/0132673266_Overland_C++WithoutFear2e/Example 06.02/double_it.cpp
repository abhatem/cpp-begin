#include <iostream>
using namespace std;

void double_it(int *p);

int main() {
    int a = 5, b = 6;

    cout << "Value of a before doubling is " << a << endl;
    cout << "Value of b before doubling is " << b << endl;

    double_it(&a);      // Pass address of a.
    double_it(&b);      // Pass address of b.

    cout << "Value of a after doubling is " << a << endl;
    cout << "Value of b after doubling is " << b << endl;

    system("PAUSE");
    return 0;
}

void double_it(int *p) {
    *p = *p * 2;
}
