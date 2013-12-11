class Fraction {
private:
        int num, den; //numerator and denominator.
public:
       void set(int n, int d)
                           {num = n; den = d; normalize()}
       int get_num(){return num;}
       int get_den(){return den;}
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

int Fraction::lcm(int a, int b){n = gcf(a,b);return a / n * b;}
