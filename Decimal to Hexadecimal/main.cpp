#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    
    int n;
    
    cout << "Welcome to decimal to hexadecimal converter" << endl;
    cout << "===========================================" << endl;
    
    while (true) {
    cout << "Enter a number then press ENTER: " ;
    cin >> n;
    
    cout.unsetf(ios::dec);
    cout.setf(ios::oct);
    
    cout << n << endl;
    
    cout.unsetf(ios::oct);
    cout.setf(ios::dec);
    
    cout << "================================ " << endl;
}    
    system("PAUSE");
    return EXIT_SUCCESS;
}
