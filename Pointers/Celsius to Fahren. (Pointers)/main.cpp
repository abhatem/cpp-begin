#include <cstdlib>
#include <iostream>

using namespace std;

void conv_temp(double *c);

int main(int argc, char *argv[])
{
    
    double cel;
    while (1) {
    cout << "Enter a tempreture in celsius temp. then press ENTER: ";
    cin >> cel;
    conv_temp(&cel);
    cout << "The equivilant Fahrenheit tempreture is: " << cel << endl;
}
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void conv_temp(double *c){
*c = (*c * 1.8) + 32;
}
