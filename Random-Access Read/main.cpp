

//Note:
// if the new entered record is not found
// the program reads the last read record.
// Try to fix this bug.

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int get_int(int default_value);

int main(int argc, char *argv[])
{
    
    system("color a");
    
    char filename[MAX_PATH - 1];
    int n = 0;
    char name[20];
    int age = 0;
    int recsize = sizeof(name) + sizeof(int);
    
    cout << "Enter file name: ";
    cin.getline(filename, MAX_PATH);
    
    // Open file to read from it
    
    fstream fbin(filename, ios::binary | ios::in);
    
    if (! fbin) {
    cout << "Could not open " << filename << ".";
    cout << " Make sure that " << filename << " exists." << endl ;

    system("PAUSE");
    return -1;
}
while (1) {
    cout << "Enter record number: ";
    n = get_int(0);
    cout << endl;
    if (n < 0) {
          break;
          }
    
    fbin.seekp(n * recsize);
    // read data from the file
    fbin.read(name, sizeof(name) - 1);
    fbin.read((char*)(&age), sizeof(int));
    
    if (strlen(name) == 0 && age == 0){
                     cout << "No record found.";
                     cout << " Try another record name." << endl;
                     cout << endl << "===========================      " << endl ;
                     } else {
    // Display the data and close.
    cout << "The name is: " << name << endl;
    cout << "The age is: " << age << endl << endl;
    cout << "===========================      " << endl << endl;
    
}
}
fbin.close();

    system("PAUSE");
    return EXIT_SUCCESS;
}

// Get integer function
// Get an integer from keyboard; return default 
// value if the user enters 0-length string.

int get_int(int default_value){
    char s[81];
    
    cin.getline(s, 80);
    if (strlen(s) == 0)
       return default_value;
    return atoi(s);
}

//Note:
// if the new entered record is not found
// the program reads the last read record.
// Try to fix this bug.
