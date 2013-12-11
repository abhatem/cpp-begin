#include <cstdlib>
#include <iostream>
#include <cstring>

#define STRMAX 599

using namespace std;


int main(int argc, char *argv[])
{
    
    char str[STRMAX + 1];
    char name[100];
    char addr[200];
    char work[200];
    
    while(1) {
    
    // prompt the user for info.
    
    cout << "Enter your name and press ENTER: ";
    cin.getline(name, 99);
    cout << "Enter your address and press ENTER: ";
    cin.getline(addr, 199);
    cout << "Enter your workspace and press ENTER: " ;
    cin.getline(work, 199);
    
    // Build the string and print it
    
       strcpy(str, "\nMy name is ");
       strncat(str, name, STRMAX - strlen(str));
       strncat(str, ", I live in ", STRMAX - strlen(str));
       strncat(str, addr, STRMAX - strlen(str));
       strncat(str, "\nand I work at ", STRMAX - strlen(str));
       strncat(str, work,  STRMAX - strlen(str));
       strncat(str, ".", STRMAX - strlen(str));
       
       cout << str << endl << endl << endl;
       
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
