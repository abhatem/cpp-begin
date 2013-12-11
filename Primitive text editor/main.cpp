#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    
    char filename[MAX_PATH + 1];
    char text[10000] ;
    char line[500] ;
    
    cout << "Enter a file name and press ENTER: ";
    cin.getline(filename, MAX_PATH);
    
    ofstream fout(filename);
    if(! fout) {
         cout << filename << " could not be opened." << endl ;
         system("PAUSE");
         return -1;
    }
    cout << filename << " was opened." << endl;
    cout << "Enter what ever you want into " << filename << " (Enter @@@ to exit):\n";
    while (1) {
          cout << "New Line: " << endl;
          cin.getline(line, 499);
          if (!strcmp(line, "@@@"))
          break;
          strcat(line, "\n");
          strcat(text, line);
          }     
        fout << text;
    fout.close();
    system("PAUSE");
    return EXIT_SUCCESS;
}
