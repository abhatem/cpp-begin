#include <iostream>
#include "Fract.h"
using namespace std;

// This version of the program is only for 
// compilers THAT SUPPORT C++0x.
//
// Fract.cpp must be compiled and linked into the project.

class FloatFraction : public Fraction {
public:
    using Fraction::Fraction;     // Inherit constr’s.
    
// NOTE: this additional constr is needed, so that when op
// functions produce a Fraction object, it can be copied
// to a FloatFraction object.

    FloatFraction(const Fraction &src)  
        {set(src.get_num(), src.get_den()); }

    double get_float() {
       double x = get_num();
       return x / get_den();
    }
};

int main() {
    FloatFraction f1(1, 2), f2(1, 3), f3(0);

    f3 = f1 + f2;
    cout << "Value of f3 is " << f3 << endl;
    cout << "Float value of f3 is " << f3.get_float() << endl;
    system("PAUSE");
    return 0;
}
