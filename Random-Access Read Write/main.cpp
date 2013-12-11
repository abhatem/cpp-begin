//Note: 
//      This is an excercise for learing purpos so it's not a fully functional program
//      but it could be developed into something better in the future. :)

//Note:
//In read mode
//   if the new entered record is not found
//   the program reads the last read record.
//   Try to fix this bug.

#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int get_int(int default_value);
int get_choice();

int main(int argc, char *argv[])
{
    
    system("color a");
    
    char filename[MAX_PATH - 1];
    int n = 0;
    char model[20];
    char make [20];
    char year [6];
    int mileage;
    int recsize = sizeof(model) + sizeof(make) + sizeof(year) + sizeof(int);
    int choice;
    
    // Great the user and let him choose whether to:
    //       1.wirte to a mydat file.
    //       2.read from a mydat file.
    //       3.quit.
    
    cout << "Welcome to the mydat file manager. \nyou have to choose one of the choices from down below: " << endl;  
    while (1) {
    cout << "1. write a mydat file." << endl;
    cout << "2. read from a mydat file." << endl; 
    cout << "3. quit." << endl;
    cout << "choice: " ;
    
    // Get choice from user
    
    choice = get_choice();
    
    // if the number choosen is not from the list then bla bla bla
    
    if (choice < 1 || choice > 3){
               cout << "Please choose something from the list. " << endl;
               } else { 
                      break;
}
}

// if the user has choosen the number 3 (to quit) then quit. :)

     if ( choice == 3) {
                    system("PAUSE");
                    return EXIT_SUCCESS;
                    }           
    cout << "Enter file name (Ex: c:\\example.mydat): ";
    cin.getline(filename, MAX_PATH);
    
    // Open file to read from it
    
    fstream fbin(filename, ios::binary | ios::out | ios::in);
    
    if (! fbin) {
    cout << "Could not open " << filename << "." << endl;
    

    system("PAUSE");
    return -1;
}
while (1) {
    cout << "Enter record number: ";
    n = get_int(0);
    cout << endl;
          
    
    fbin.seekp(n * recsize);
    
    // if the choice at the begining of the program is to read the read the data from file
    
       if (choice == 2) {
                  
    // read data from the file
    
    fbin.read(model, sizeof(model) - 1);
    fbin.read(make, sizeof(make) - 1);
    fbin.read(year, sizeof(year) - 1);
    fbin.read((char*)(&mileage), sizeof(int));
    
    // Display the data and close.
    
    cout << "The model is: " << model << endl;
    cout << "The make is: " << make << endl;
    cout << "The year of manifacturing is: " << year << endl;
    cout << "The mileage is: " << mileage << endl << endl;
    cout << "===========================      " << endl << endl;
         } else if (choice == 1) {
                
    //If the user has choosen to wirte to the file then get the data and write it.
    
    cout << "Enter the model number: ";
    cin.getline(model, sizeof(model) -1);
    cout << "Enter the make: ";
    cin.getline(make, sizeof(make) -1);
    cout << "Enter the year the car got manifactured in: ";
    cin.getline(year,sizeof(year) -1);
    cout << "Enter the mileage:";
    mileage = get_int(0);
    cout << endl << endl << "===========================      " << endl << endl;
    
    // Write the data.
    
    fbin.write(model, sizeof(model) - 1);
    fbin.write(make, sizeof(make) - 1);
    fbin.write(year, sizeof(year) - 1);
    fbin.write((char*)(&mileage), sizeof(int));
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

// See if you can remove this function

int get_choice() {
    char s[81];
    
    cin.getline(s, 80);
    if (strlen(s) == 0)
       return 0;
    
    return atoi(s);
}


//Note:
//in read mode
// if the new entered record is not found
// the program reads the last read record.
// Try to fix this bug.
