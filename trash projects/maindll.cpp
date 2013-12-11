#include <cstdlib>
#include <iostream>
#include "dll2.h"

using namespace std;

int main(int argc, char *argv[])
{
    
    DllClass d;
    
    cout << d.HelloWorld();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
