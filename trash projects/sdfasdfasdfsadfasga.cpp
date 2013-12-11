#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 7;
    int j = 8;
    int a = 255;
    a = a & (5<<7);
    cout << a << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
