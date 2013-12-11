#include <cstdlib>
#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int main(int argc, char *argv[])
{
    
  Fraction f1(1, 3);
  Fraction f2(1, 3);
  
  Fraction f3 = f1 - f2;
  
  if (f2 == f1) 
     cout << "f2 = f1" << endl;
  
  
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


