// This code is not a full program and it has not been tested (to do)
#include <cstdlib>
#include <iostream>
#include "note.h"
#include <string>
#include <fstream>

#define SUBJECT_SIZE 50
#define TEXT_SIZE 250

using namespace std;

int main(int argc, char *argv[])
{
    
    note no;
    char *note_name;
    
    if (argc > 2) { 
             // syntax error handling
             if (argc != 3) {
             cout << "Syntax Error!" << endl;
             cout << "The syntax is as following: " << endl;
             cout << "note [\"SUBJECT\"] [\"TEXT\"]" << endl;
             return -1;
             } else {
             no.subject = argv[1];
             no.text = argv[2];
             no.date = __DATE__;
             no.time = __TIME__;
             // Error Handling 
             }
             if (sizeof(no.text) > TEXT_SIZE) {
                cout << "The text is too long for a note" << endl;
                return -1;
             } else if (sizeof(no.subject) > SUBJECT_SIZE) {
                cout << "The subject is too long for a note" << endl;
                return -1;
             }
             
             fstream fbin(no.subject, ios::binary | ios::out);
             if (!fbin) {
                 cout << "Could not save note " << no.subject << endl;
                 system("PAUSE");
                 return -1;
             }
             
             fbin.write(no.subject, SUBJECT_SIZE - 1);
             fbin.seekp(SUBJECT_SIZE);
             fbin.write(no.text, TEXT_SIZE - 1);
             fbin.close();
             
             
             // IMPORTANT: WORK ON THE NONE CONSOLE BASED PROGRAM
             // THAT IS COMMENTED OUT.
             
             
             //cout << no.date << ", " << no.time << ", " << no.subject << ", " ;
             //cout << no.text;
}   
    /*      
    } else {
           
           int c;
             cout << "Welcome to note manager!" << endl;
             cout << "========================" << endl;
             while (true) {
                   while (true) {
                   cout << "Do you want to continue(Y or N): "
                   if (c == 'y' || c == 'Y') {
                         break;
                   } else if(c == 'n' || c == 'N') {
                         return EXIT_SUCCESS;
                   }
                   }
                   
                   cout << "Enter Subject: "
                   // be carefull 
                   getline(cin, no.subjec);
                   cout << "Enter Text: "
                   // be carefull
                   getline(cin, no.text);
                   */               
             
//}
    system("PAUSE");
    return EXIT_SUCCESS;
}
