#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    double ftemp;
    cout << "Enter the Fahrenheit temp:";
    cin >> ftemp;
    cout << "The Celsius temp is:" << (ftemp - 32)/1.8 << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
