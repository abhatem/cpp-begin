#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color a");
    int a;
    
    while (true) {
    cout << a << ", " << "a" ;
    system("color a");
    a=a+1000000000;
    system("color c");
}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
