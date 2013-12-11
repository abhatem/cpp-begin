#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    system("color a");
     
    while(true){
    int n;
    bool is_prime=true;
    double sqr;
    cout << "Enter a number and press ENTER to check whether it's a prime number or not:\n";
    cin >> n;
    sqr=sqrt(n);
    for (int i=2; i <= sqr; i++){
        if (n % i == 0) {
              is_prime=false;
              break;
              }
        }
        
        if (is_prime) {
                      cout << "The number is a PRIME number." << endl << endl << endl;
                      system("PAUSE");
                      system("cls");
                      
                      } else {
                      cout << "The nuber is NOT A PRIME number." << endl << endl << endl;
                      system("PAUSE");
                      system("cls");
                      }
   } 
    system("PAUSE");
    return EXIT_SUCCESS;

}
