#include "Fraction.h"

using namespace std;

class FloatFraction : public Fraction {
      public:
             
             // Constructors:
             FloatFraction() {set(0, 1);} //Default const.
             FloatFraction(double d) {set_float(d);}
             FloatFraction(int n) {set(n, 1);}
             FloatFraction(int n, int d) {set(n, d);}
             FloatFraction(const FloatFraction &src) 
                                 {set(src.get_num(), src.get_den());}     
             
             // Operator Functions:
        /*                
       FloatFraction operator+(const FloatFraction &other) {return add(other);}
       FloatFraction operator-(const FloatFraction &other) {return sub(other);}
       FloatFraction operator*(const FloatFraction &other) {return mult(other);}
       FloatFraction operator/(const FloatFraction &other) {return div(other);}
       */
       
       FloatFraction operator+(FloatFraction a) {add(a);}
       FloatFraction operator*(FloatFraction a) {mult(a);}
       FloatFraction operator-(FloatFraction a) {sub(a);}
       FloatFraction operator/(FloatFraction a) {div(a);}
       
       bool operator>(const FloatFraction &other);
       bool operator<(const FloatFraction &other);
       bool operator==(const FloatFraction &other);
                                 
             // other member functions
             
             FloatFraction set_float(double d);
             double get_float() {
                    double x = get_num();
                    return x / get_den();
             }
             
             FloatFraction add(const FloatFraction &other);
             FloatFraction mult(const FloatFraction &other);
             FloatFraction div(const FloatFraction &other);
             FloatFraction sub(const FloatFraction &other);
             
};

FloatFraction FloatFraction::set_float(double d) {
         // numerator = d * 100
         // denominator =  100
         // call set witch will call normalize
         
         int n = static_cast<int>(d * 100.0);
         set(n, 100);
         
         }
         
bool FloatFraction::operator==(const FloatFraction &other) {
     return (get_num() == other.get_num() && get_den() == other.get_den());
}  

bool FloatFraction::operator>(const FloatFraction &other){
     return(get_num() * other.get_den() > get_den() * other.get_num());
}

bool FloatFraction::operator<(const FloatFraction &other) {
     Fraction fract(get_num(), get_den());
     
     if ( fract > other)
         return false;
         
     if ( fract == other )
        return false;
        
     return true;
     
}

FloatFraction FloatFraction::add(const FloatFraction &other){
         FloatFraction fract;
         int lcd = lcm(get_den(), other.get_den());
         int quot1 = lcd/get_den();
         int quot2 = lcd/other.get_den();
         fract.set(get_num() * quot1 + other.get_num() * quot2, lcd);
         return fract;
}

FloatFraction FloatFraction::mult(const FloatFraction &other){
         FloatFraction fract;
         fract.set(get_num() * other.get_num(), get_den() * other.get_den());
         return fract;
}

FloatFraction FloatFraction::div(const FloatFraction &other){
         FloatFraction fract;
         fract.set(get_num() * other.get_den(), get_den() * other.get_num());
         return fract;
}

FloatFraction FloatFraction::sub(const FloatFraction &other){
         FloatFraction fract;
         int lcd = lcm(get_den(), other.get_den());
         int quot1 = lcd/get_den();
         int quot2 = lcd/other.get_den();
         fract.set(get_num() * quot1 - other.get_num() * quot2, lcd);
         return fract;
}

