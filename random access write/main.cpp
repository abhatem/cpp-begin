#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int get_int(int default_value);

int main(int argc, char *argv[])
{
    
    char filename[MAX_PATH + 1];
    int n = 0;
    char name[20];
    int age=0;
    int recsize = sizeof(name) + sizeof(int);
    
    cout << "Enter file name: ";
    cin.getline(filename , MAX_PATH);
    
    // open file for binary write
    
    fstream fbin(filename, ios::binary | ios::out);
    if (!fbin) {
               cout << "could not open " << filename << endl;
               system("PAUSE");
               return -1;
}

// Get record number to write
while (1) {
cout << "Enter file record number: ";
n = get_int(0);
if (n < 0){
      break;
}
// Get data from user
cout << "Enter name: ";
cin.getline(name, sizeof(name)-1);
cout << "Enter age: ";
age = get_int(0);

// write data to the file.
fbin.seekp(n * recsize);
fbin.write(name, sizeof(name) - 1);
fbin.write((char*)(&age), sizeof(int));


}
fbin.close();

    system("PAUSE");
    return EXIT_SUCCESS;
}

#define COL_WIDTH 80 // 80 is the typical column width

// Get integer function
// Get an integer from keyboard; return default
// value if user enters 0 - length streing.

int get_int (int default_value) {
    char s[COL_WIDTH + 1];
    cin.getline(s, COL_WIDTH);
    if (strlen(s) == 0)
       return default_value;
    return atoi(s);
}
