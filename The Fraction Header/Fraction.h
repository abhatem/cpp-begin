class Fraction {
private:
        int num, den; //numerator and denominator.
public:
       void set(int n, int d){num = n; den = d; normalize();}
       int get_num(){return num;}
       int get_den(){return den;}
       Fraction add(Fraction other);
       Fraction mult(Fraction other);
       Fraction div(Fraction other);
       Fraction sub(Fraction other);
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

Fraction Fraction::add(Fraction other){
         Fraction fract;
         int lcd = lcm(den, other.den);
         int quot1 = lcd/den;
         int quot2 = lcd/other.den;
         fract.set(num * quot1 + other.num * quot2, lcd);
         return fract;
}

Fraction Fraction::mult(Fraction other){
         Fraction fract;
         fract.set(num * other.num, den * other.den);
         return fract;
}

Fraction Fraction::div(Fraction other){
         Fraction fract1, fract2;
         fract1.set(other.den, other.num);
         fract2.set(num * fract1.num, den * fract1.den);
         return fract2;
         }
         
