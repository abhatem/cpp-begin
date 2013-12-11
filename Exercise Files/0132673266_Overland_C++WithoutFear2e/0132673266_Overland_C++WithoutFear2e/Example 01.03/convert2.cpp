#include <iostream>
using namespace std;

int main() {

// Declare floating-pt variables.

     double  ctemp, ftemp;

// Prompt and input value of ctemp (Celsius Temp).

     cout << "Input a Celsius temp and press ENTER: ";
     cin >> ctemp;

// Calculate ftemp (Fahrenheit Temp) and output it.

     ftemp = (ctemp * 1.8) + 32;
     cout << "Fahrenheit temp is: " << ftemp;

     system("PAUSE");
     return 0;
}
