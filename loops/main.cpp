#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color a");
    int i, n;
    i=1;
    cout << "Enter a number and then press ENTER: ";
    cin >> n;
    while (i <= n) {
          cout << i <<", ";
          if (i == n) {
                cout << i << endl;
                }
          i=i+1;
          }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
