#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color a");
    
    int num, i=1;
    
    cout << "Enter a number and press ENTER: " << endl ;
    cin >> num;
    
    while (num >= i) {
          cout << num << ", ";
          num--;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
