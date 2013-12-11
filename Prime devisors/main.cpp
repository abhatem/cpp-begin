#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

void get_divisors(int n);
void get_lowest_divisor(int g);

int main(int argc, char *argv[])
{

    int n = 0;
        while (true) {
    cout << "Enter a number (0 = Exit) and press ENTER: ";
    cin >> n;
    if (n == 0) 
    break;
    get_divisors(n);
    cout << endl;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}

void get_divisors(int n) {
     int i;
     double sqr=sqrt(n);
     
     for (i = 2; i <=sqr; i++) {
         if (n % i == 0) {
         cout << i << ", " ;
         get_lowest_divisor(n / i);
         return;
         }
         }
         
         cout << n ;
         }
     
void get_lowest_divisor(int g) {
     get_divisors(g);
     }

