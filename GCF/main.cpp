#include <cstdlib>
#include <iostream>

using namespace std;

int gcf(int a, int b);

int main(int argc, char *argv[])
{
    system("color a");
    
    int a = 0, b = 0; //input to GCF.
    while (true) {
    cout << "Enter a number and press ENTER: ";
    cin >> a;
    cout << "Enter another number and press ENTER: ";
    cin >> b;
    gcf(a, b);
}
    system("PAUSE");
    return EXIT_SUCCESS;
}


int gcf(int a, int b) {
    if (b == 0)
    cout << a << endl << endl;

    else if (b != 0) {
    cout << "GCf(" <<  b <<  ", " <<  a % b <<  ")" << endl; 
    gcf(b, a%b);
    }
}
