#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int get_int1(int default_value);
int get_int2(int defualt_value);
int main(int argc, char *argv[])
{
    
    system("color a");
    
 char filename[MAX_PATH + 1];
    int n = 0;
    char model[20];
    char make[20];
    char year[6];
    int mileage;
    int recsize = sizeof(model) + sizeof(make) + sizeof(year) + sizeof(int) ;
    
    cout << "Enter name and path of file: ";
    cin.getline (filename, MAX_PATH);
    
    // open file for binary write
    
    fstream fbin(filename, ios::binary | ios::out);
    if (!fbin) {
               cout << "Could not open " << filename << ". " << endl;
               system("PAUSE");
               return -1;
               }
    // Get record number to write to.
    while (1) {
    cout << endl << endl << "Enter the new record number: ";
    n = get_int1(0);
    if ( n < 0 ) {
         break;
         }
    // Get data from end user.
    
    cout << "Enter model name: " << endl;
    cin.getline(model, sizeof(model) - 1);
    
    cout << "Enter the make: " << endl;
    cin.getline(make, sizeof(make)-1);
    
    cout << "Enter the year manifactured: " << endl;
    cin.getline(year, sizeof(year)-1);
    
    cout << "Enter mileage: " << endl;
    mileage = get_int1(0);
    cout << endl << "----------------------------   " << endl;
    
    // Write data to the file
    
    fbin.seekp(n * recsize);
    fbin.write(model, sizeof(model) - 1);
    fbin.write(make, sizeof(make) - 1);
    fbin.write(year, sizeof(year) - 1);
    fbin.write((char*)(&mileage), sizeof(int));
    
}
    system("PAUSE");
    return EXIT_SUCCESS;
}


#define COL_WIDTH 80 // 80 is typical column width

//Get integer function
//Get an integer from keyboard; return default
// value if user enters 0 - length string.

int get_int1(int default_value) {
    char s[COL_WIDTH + 1];
    cin.getline(s, COL_WIDTH);
    if (strlen(s) == 0)
       return default_value;
    return atoi(s);
}
int get_int2(int default_value) {
    char s[COL_WIDTH + 1];
    cin.getline(s, COL_WIDTH);
    if (strlen(s) == 0)
       return default_value;
    return atoi(s);
}
