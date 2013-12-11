#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
    
    char the_string[81], *p;
    int i;
    
    while (1) {
          i = 0;
    cout << "Input a string to parse: ";
    cin.getline(the_string, 81);
    p = strtok(the_string, "& ");
    while (p != NULL) {
          cout << p << endl;
          p = strtok(NULL, "& ");
          i++;
          }   
    cout << "There was " << i << " tokens. ";
    cout << endl << endl;
}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
