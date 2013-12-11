#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout.setf(ios::showpos | ios::uppercase);
    cout << 27 << endl;
    cout << "hello world" << endl;
    cout.unsetf(ios::showpos);
    cout << 28 << endl;
    
    cout.setf(ios::hex, ios::basefield);
    cout << 27 << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
