#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color a");
    
    int num1, num2;
    
    cout << "Enter the number you want to start counting from then press ENTER:\n";
    cin >> num1;
    cout << "Enter the number you want to counting at it's value:\n";
    cin >> num2;
    while (num1 <= num2) {
         
          cout << num1 << "/" << num2 << endl ;
         
          num1++;
          }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
