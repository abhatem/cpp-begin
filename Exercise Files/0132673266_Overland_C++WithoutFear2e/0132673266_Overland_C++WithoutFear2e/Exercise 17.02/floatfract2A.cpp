#include <iostream>
#include "Fract.h"
using namespace std;

// This is the version of the program for 
// compilers NOT COMPLIANT WITH C++0x.
//
// Fract.cpp must be compiled and linked into the project.


class FloatFraction : public Fraction {
public:
    FloatFraction() {set(0, 1);}
    FloatFraction(int n, int d) {set(n, d);}
    FloatFraction(int n) {set(n, 1);}
    FloatFraction(const FloatFraction &src)
        {set(src.get_num(), src.get_den()); }
    
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
    FloatFraction f1(1, 2), f2(1, 3), f3;

    f3 = f1 + f2;
    cout << "Value of f3 is " << f3 << endl;
    cout << "Float value of f3 is " << f3.get_float() << endl;
    
    f3 = f2 * f3;
    cout << "The value of f1 * f2 is " << f3.get_float() << endl;
    if (FloatFraction(5,6) == f1 + f2)
         cout << "5/6 == f1 + f2" << endl;
    system("PAUSE");
    return 0;
}
