#include <cstdlib>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>

using namespace std;

double get_number();

int main(int argc, char *argv[])
{
    double x;
    
    while(true){
                cout << "Enter a number (press ENTER to exit): ";
                x = get_number();
                if ( x == 0.0){
                break;
                }
                cout << "The square root of x is: " << sqrt(x);
                cout << endl << endl << endl;
                
    }
    
   // system("PAUSE");
    return EXIT_SUCCESS;
}


// Get a number Function 
// get number input by user, taking only the first numeric input entered. 
// if user presses ENTER with no input then return a default value of 0.0

double get_number(){
       char s[100];
       
       cin.getline(s, 100);
       if (strlen(s) == 0){
       return 0.0;
       }
       return atof(s);
       }
