#include <iostream>
using namespace std;

class Fraction {
private:
        int num, den; //numerator and denominator.
public:
       // Constructors:
       Fraction() {num = 0; den = 1;}
       Fraction(int n, int d) {num = n; den = d; normalize();}
       Fraction(int n) {set(n, 1);}
       Fraction(Fraction const &src){num = src.num, den = src.den;}
       
       // Other member functions:
       void set(int n, int d){num = n; den = d; normalize();}
       int get_num() const {return num;}
       int get_den() const {return den;}
       
       // Operations:
       Fraction add(const Fraction &other);
       Fraction mult(const Fraction &other);
       Fraction div(const Fraction &other);
       Fraction sub(const Fraction &other);
       
       Fraction operator+(const Fraction &other) {return add(other);}
       Fraction operator-(const Fraction &other) {return sub(other);}
       Fraction operator*(const Fraction &other) {return mult(other);}
       Fraction operator/(const Fraction &other) {return div(other);}
       bool operator>(const Fraction &other);
       bool operator<(const Fraction &other);
       bool operator==(const Fraction &other);
       friend ostream &operator<<(ostream &os, Fraction &fr);
       
       
private:
        void normalize(); //Convert to standard form.
        int gcf(int a, int b);        //Greatest common factor
        int lcm(int a, int b);        //Lowest common denominator.
};




// Normalize: put fraction into standard form, unique for each
// mathematically different value.
//

void Fraction::normalize(){
  
  // Handle cases involving 0
  
  if (den == 0 || num == 0){
          num = 0;
          den = 1;
  }

  // put neg. sign in numerator only.
  
  if (den < 0) {
          num *= -1;
          den *= -1;
  }
          
     
}

int Fraction::gcf(int a, int b) {
    if (b == 0)
       return abs(a);
    else 
         return gcf(b, a%b);
}

int Fraction::lcm(int a, int b){
    int n = gcf(a, b);
    return a / n * b;
}

Fraction Fraction::add(const Fraction &other){
         Fraction fract;
         int lcd = lcm(den, other.den);
         int quot1 = lcd/den;
         int quot2 = lcd/other.den;
         fract.set(num * quot1 + other.num * quot2, lcd);
         return fract;
}

Fraction Fraction::mult(const Fraction &other){
         Fraction fract;
         fract.set(num * other.num, den * other.den);
         return fract;
}

Fraction Fraction::div(const Fraction &other){
         Fraction fract;
         fract.set(num * other.den, den * other.num);
         return fract;
}

Fraction Fraction::sub(const Fraction &other){
         Fraction fract;
         int lcd = lcm(den, other.den);
         int quot1 = lcd/den;
         int quot2 = lcd/other.den;
         fract.set(num * quot1 - other.num * quot2, lcd);
         return fract;
}

bool Fraction::operator==(const Fraction &other) {
     return (num == other.num && den == other.den);
}  
//---------------------------------------------------------------------
//FRACTION CLASS FRIEND FUNCTION

ostream &operator<<(ostream &os, Fraction &fr){
        os << fr.num << "/" << fr.den;
        return os;
}

bool Fraction::operator>(const Fraction &other){
     return(num * other.den > den * other.num);
}

bool Fraction::operator<(const Fraction &other) {
     Fraction fract(num, den);
     
     if ( fract > other)
         return false;
         
     if ( fract == other )
        return false;
        
     return true;
     
}

