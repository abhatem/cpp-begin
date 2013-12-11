// Example 16.01.03
// This example extends list sorting to the Fraction class.
// Note that the Fraction class needs to have == and < operators.
//

#include <iostream>
#include <list>
#include <string>
#include <cstdlib>   // Include support for atoi.

using namespace std;

int get_num();

class Fraction {
private:
    int num, den;      // Numerator and denominator.
public:
    Fraction() {set(0, 1);}
    Fraction(int n, int d) {set(n, d);}
    Fraction(int n) {set(n, 1);}
    Fraction(const Fraction &src);

    void set(int n, int d) {num = n; den = d; normalize();}
    int get_num() const {return num;}
    int get_den() const {return den;}
    Fraction add(const Fraction &other);
    Fraction mult(const Fraction &other);
    Fraction operator+(const Fraction &other)
        {return add(other);}
    Fraction operator*(const Fraction &other)
        {return mult(other);}
    int operator==(const Fraction &other);
    int operator<(const Fraction &other);
    friend ostream &operator<<(ostream &os, Fraction &fr);

private:
    void normalize();   // Put fraction into standard form.
    int gcf(int a, int b);     // Greatest Common Factor.
    int lcm(int a, int b);     // Lowest Common Denominator.
};
        

int main(int argc, char *argv[])
{
    string s; 
    list<Fraction> LF;
    list<Fraction>::iterator iter;

    int n = 0;
    int d = 1;
    
    while (true) {

          cout << "Enter numerator (ENTER to exit): ";
          getline(cin, s);
          if (s.size() == 0)
               break;
          n = atoi(s.c_str());
          cout << "Enter denominator: ";
          d = get_num();

          Fraction fract(n, d);

          LF.push_back(fract);
    }
    LF.sort();         // Sort, and then print elements.
    
    for (iter = LF.begin(); iter != LF.end(); iter++) {
        cout << *iter << endl;       
    }
    system("PAUSE");
    return 0;
}

int get_num() {
    string s;
    getline(cin, s);
    return atoi(s.c_str());
}

// ---------------------------------------------------
// FRACTION CLASS FUNCTIONS

Fraction::Fraction(Fraction const &src) {
     num = src.num;
     den = src.den;
}

// Normalize: put fraction into a standard form, unique
//  for each mathematically different value.
//
void Fraction::normalize(){

    // Handle cases involving 0

    if (den == 0 || num == 0) {
        num = 0;
        den = 1;
    }

    // Put neg. sign in numerator only.

    if (den < 0) {
        num *= -1;
        den *= -1;
    }

    // Factor out GCF from numerator and denominator.

    int n = gcf(num, den);
    num = num / n;
    den = den / n;
}

// Greatest Common Factor
//
int Fraction::gcf(int a, int b) {
    if (a % b == 0)
        return abs(b);
    else
        return gcf(b, a % b);
}

// Lowest Common Multiple
//
int Fraction::lcm(int a, int b){
    return (a / gcf(a, b)) * b;
}

Fraction Fraction::add(const Fraction &other) {
    Fraction fract;
    int lcd = lcm(den, other.den);
    int quot1 = lcd/den;
    int quot2 = lcd/other.den;
    fract.set(num * quot1 + other.num * quot2, lcd);
    fract.normalize();
    return fract;
}

Fraction Fraction::mult(const Fraction &other) {
    Fraction fract;
    fract.set(num * other.num, den * other.den);
    fract.normalize();
    return fract;
}

int Fraction::operator==(const Fraction &other) {
    return (num == other.num && den == other.den);
}

int Fraction::operator<(const Fraction &other) {
    return (num * other.den  <  den * other.num);
}

// ---------------------------------------------------
// FRACTION CLASS FRIEND FUNCTION

ostream &operator<<(ostream &os, Fraction &fr) {
    os << fr.num << "/" << fr.den;
    return os;
}

