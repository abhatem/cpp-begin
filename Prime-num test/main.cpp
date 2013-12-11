#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    
    int num/* number to test */, i;
    double sqr;
    bool is_prime = true; // boolean flag
    
   
    // get keyboard input
    cout << "Enter a number and press ENTER: ";
    cin >> num;
    //test for prime by checking for divisibility by all whole numbers from 2 to  sqrt (num)
   sqr=sqrt(num);
   int i=2;
    while (sqr >= i) {
          if (num % i == 0) {
                is_prime = false;
                break;
                }
                i++;
                }
                // output the results
    if (!is_prime){
                   cout << "This number is NOT a prime number" << endl;
                   } else {
                          cout << "This is a prime number" << endl;
                          }
                         
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
