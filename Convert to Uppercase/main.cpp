#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void convert_to_lower(char *s);

int main(int argc, char *argv[])
{
    
    char s[100];
    while (1) {
    cout << "Enter string to convert and press ENTER: ";
    cin.getline(s, 100);
    
    convert_to_lower(s);
    cout << "The converted string is: " << endl ;
    cout << s << endl << endl << endl;
    
}
    system("PAUSE");
    return EXIT_SUCCESS;
}

void convert_to_lower(char *s){
                 
                for ( ; ; s++){
                *s = tolower(*s);
                if (*s == '\0'){
                       break;
                       }
                }
                 
     }
