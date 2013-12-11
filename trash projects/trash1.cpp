#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

int n;

    cout << "Enter an age then press ENTER: ";
    cin >> n;
    if ( (n > 12) && (n < 20) )  {
         cout << "Subject is a teenager\n";
         } else {
                cout << "Subject is NOT  a teenager\n";
                }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
