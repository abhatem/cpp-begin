#include <cstdlib>
#include <iostream>

using namespace std;

void double_it(int *p);

int main(int argc, char *argv[])
{
    
    int a = 5, b = 6;
    
    cout << "The value of a before doubling is: " << a << endl ;
    cout << "The value of b before doubling is: " << b << endl ;
    
    double_it(&a);
    double_it(&b);
    
    cout << "The value of a after doubling is: " << a << endl ;
    cout << "The value of b after doubling is: " << b << endl ;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void double_it(int *p) {
*p = *p * 2;
}
