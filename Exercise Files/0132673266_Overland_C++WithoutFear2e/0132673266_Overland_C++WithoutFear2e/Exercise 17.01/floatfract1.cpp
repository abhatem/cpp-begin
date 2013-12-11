// Exercise 17.01.02
// Adds set_float() funct. and tests it.
//
#include <iostream>

#include "Fract.h" // Declaration of Fraction class must
                   // be placed in Fract.h.
using namespace std;

// Note: Fract.cpp must be compiled and linked into
// the project, or else Fraction frunction defs must be 
// copied into this file.

class FloatFraction : public Fraction {
public:
    FloatFraction() {} // Default constr:
                       // F.F. inherits no contr’s!

    FloatFraction(double x) {set_float(x);}    // NEW CONSTR.

    double get_float() {
       double x = get_num();
       return x / get_den();
    }
    
    void set_float(double x) {             
         int n = static_cast<int>(x * 100.0);
         set( n, 100 ); 
    } 
};

int main() {
    FloatFraction fract1(0.75), fract2(1.5), fract3(0.333);

    cout << "Value of fract(0.75) is " << fract1 << endl;
    cout << "and its get_float val is: " << fract1.get_float();
    cout << endl;
 
    cout << "Value of fract(1.5) is " << fract2 << endl;
 
    cout << "Value of fract(.333) is " << fract3 << endl;

    system("PAUSE");
    return 0;
}
