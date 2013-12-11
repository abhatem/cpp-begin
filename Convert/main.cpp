#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    
    double ctemp, ftemp; // declaring the ctemp (celsius) and the ftemp (fehrenheit)
    cout << "Input a Celsius temp and press ENTER:"; // output this string
    cin >> ctemp; //take input from the console and put it into the ctemp variable
    ftemp=(ctemp * 1.8) + 32;//the conversation formula
    cout << "Fahrenheit temp is:" << ftemp << endl; // output the Fahrenheit temp
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
