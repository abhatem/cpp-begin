#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    int num;
    //get a number from keyboard
    cout << "Enter a number and press ENTER:" << endl ;
    cin >> num;
    //get reminder after dividing by 2
    
    if (num % 7 == 0) {
                 cout << "The number is divsible by 7 and the result from dividing it by 7 is: " <<num / 7 << endl << endl;
                 } else {
                        cout << "The number is not divisible by 7. \nand the result from dividing it by 7 is: "<< num /7 <<" and the reminder will be: " << num % 7 << endl << endl;
                        }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
