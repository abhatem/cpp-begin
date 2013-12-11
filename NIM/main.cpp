#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
int rand_0toN1(int n);

int main(int argc, char *argv[])
{
while (true) {
    system("color a");
    
    int total, n, x, in;
    cout << "Welcome to NIM. Pick a starting total: ";
    cin >> total;
    while(total <= 0 ){
                cout << "Total must be greater than 0 " << endl;
                cout << "Re-Enter: ";
                cin >> total;
                }
  
    cout << "The range of the numbers that you will be able to subtract from the total\nwill be between 1 and x. Please input x: ";
    cin >> x ;
  while (x >= 1) {
        cout << "x must be greater than 1. " << endl;
        cout << "Re-Enter: ";
        cin >> x;
        }
                
    
                      
   
    while(true){
                in = x ;
                while (in > 0) {
              if (total % in+1 == x || total % in == 0){
                        total = total - in;
                        cout << "I'm subtracting " << in <<"." << endl;
                        cout << "The new total is: " << total << "." << endl <<endl;
                        break;
                        }
                        in--;
                        }
                               
              
              //this is commented out because it was for the 1 or 2 subtraction 
              //options in a previuse version of this program.
                
    /*if (total % x == 2 ) {
              total = total - 2  ;
              cout << "I'm subtacting 2. " << endl; 
              } else {
                    total = total-1;
                     cout << "I'm subtracting 1." << endl;
                     }
                    cout << "The new total is: " << total << endl << endl;*/
              if (total <= 0) {
                            cout << "hah! I won. The total is 0\n\n\n\n";
                            break;
                            
                            } 
              cout << "Enter a number to subtract (From 1 to " << x << "): ";
              cin >> n;
              while (n < 1 || n > x) {
                    cout << "Input must be from 1 to " << x <<"." << endl;
                    cout << "Re-Enter: ";
                    cin >> n;
                    }
                    total=total-n;
                    cout << "New total is "  << total << endl << endl;
                    if (total <= 0) {
                              cout << "You win!\n\n\n\n" << endl;
                              break;
                              }
              
}
}
    system("PAUSE");
    return EXIT_SUCCESS;

}
