#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color a");
    int i, n1, n2;
    cout << "Enter a number to start counting down from and press ENTER: ";
    cin >> n1;
    cout << "Enter a number to stop counting down at and press ENTER: ";
    cin >> n2;
    for (n1; n1>=n2; n1--){
        cout << n1 << ", ";
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
