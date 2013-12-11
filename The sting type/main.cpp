#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    string str, name, addr, work;
    // get three string from the user
    
    cout << "Enter name and press ENTER: ";
    getline(cin, name);
    cout << "Enter address and press ENTER: ";
    getline(cin, addr);
    cout << "Enter work spase and press ENTER: ";
    getline(cin, work);
    
    str = "\nMy name is " + name + ", " + "I live at " + addr + 
    "\nI work at " + work + ".\n";
    cout << str << endl << endl << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
