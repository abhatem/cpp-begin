#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
double randflo();

int main(int argc, char *argv[])
{
    
    int a, i;
    double r;
    
    srand(time(NULL));
    
    cout << "Enter a number and press ENTER (0 = Exit): " ;
    cin >> a;
    
    for(i = 1; i <= a; i++) {
            r = randflo();
            cout << r << " " ;
            }
            
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

double randflo() {
      
    
       return (double) rand() / RAND_MAX;
}
