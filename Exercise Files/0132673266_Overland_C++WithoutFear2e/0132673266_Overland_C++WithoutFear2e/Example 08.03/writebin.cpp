#include <iostream>
#include <fstream>
using namespace std;

int get_int(int default_value);
char name[20];

int main() {
    char filename[81];
    int n;
    int age;
    int recsize = sizeof(name) + sizeof(int);
    

    cout << "Enter file name: ";
    cin.getline(filename, 80);

    // Open file for binary read and write.    

    fstream  fbin(filename, ios::binary | ios::out);
    if (!fbin) {
        cout << "Could not open file " << filename << endl;
        system("PAUSE");
        return -1;
    }

//  Get record number to write to.

    cout << "Enter file record number: ";
    n = get_int(0);

    // Get data from end user.

    cout << "Enter name: ";
    cin.getline(name, 19);
    cout << "Enter age: ";
    age = get_int(0);

    // Write data to the file.
 
    fbin.seekp(n * recsize);
    fbin.write(name, 20);
    fbin.write(reinterpret_cast<char*>(&age), sizeof(int));
    fbin.close();
    system("PAUSE");
    return 0;
}

// Get integer function
// Get an integer from keyboard; return default
//  value if user enters 0-length string.
//
int get_int(int default_value) {
    char s[81];

    cin.getline(s, 80);
    if (strlen(s) == 0)
         return default_value;
    return atoi(s);
}
