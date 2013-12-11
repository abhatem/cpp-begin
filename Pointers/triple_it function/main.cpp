#include <cstdlib>
#include <iostream>

using namespace std;

void triple_it(int *p);

int main(int argc, char *argv[])
{
    
    int a = 5, b = 6;
    
    
    
    cout << "The value of a before tripling is: " << a << endl;
    cout << "The value of b before tripling is: " << b << endl; 
    
    triple_it(&a);
    triple_it(&b);
    
    cout << "The value of a after tripling is: " << a << endl;
    cout << "The vlaue of b after tripling is: " << b << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void triple_it(int *p) {
     *p = *p * 3;
     }
