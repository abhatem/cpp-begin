#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

void to_upper(char *s);

using namespace std;

#define COL_WIDTH 80

int main(int argc, char *argv[])
{
        
     int c; //input character
     int i; //loop counter
     int u = 24;
     
    
     char filename[MAX_PATH + 1];
     char input_line[COL_WIDTH +1];
     
     cout << "Enter a file name and press ENTER: ";
     cin.getline(filename, MAX_PATH);
     
     ifstream file_in(filename);
     
     if (! file_in) {
           cout << filename << " could not be opened.";
           cout << endl;
           system("PAUSE");
           return -1;
           }
           
           while (true) {
                 for (i = 1; i<=u && ! file_in.eof(); i++) {
                     file_in.getline(input_line, COL_WIDTH);
                     
                     to_upper(input_line);
                     cout << input_line << endl;
                     }
                     if (file_in.eof())
                     break;
                   cout << "More? (Press 'Q' and ENTER to quit)";
                   cin.getline(input_line, COL_WIDTH);
                   c = input_line[0];
                   if (atoi(input_line) == 0){
                   if (c == 'Q' || c == 'q')
                   break;
                   } else {
                          u = atoi(input_line);
                          }
                          
                   
                   
                   
                   }  
    file_in.close();
    system("color a");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void to_upper(char *s){
     int length = strlen(s);
     
     for (int i = 0; i < length; i++)
     s[i] = toupper(s[i]);
     
     
     }
     
