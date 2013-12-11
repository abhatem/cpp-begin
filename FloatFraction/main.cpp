#include <cstdlib>
#include <iostream>
#include "FloatFraction.h"

using namespace std;

int main(int argc, char *argv[])
{
    
    FloatFraction fract1;
    FloatFraction fract2(.5);
    FloatFraction fract3;
    
    cout << "0.5 is " << fract2.get_num() << "/" << fract2.get_den() << endl;
    fract1.set(1, 2);
    cout << "1/2 is " << fract1.get_float() << endl;
    fract1.set(3, 5);
    cout << "3/5 is " << fract1.get_float() << endl;
    fract3 = fract1 + fract2;
    cout << fract3 << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
