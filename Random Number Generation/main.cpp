#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int rand_0toN1(int n);

int main(int argc, char *argv[])
{
    
    system("color a");
    
    int n, i, r;
    while (true) {
    srand(time(NULL)); // set seed for random numbers
    cout << endl << "Enter number of dice to roll: ";
    cin >> n;
    
    for (i = 1; i<=n; i++) {
        r = rand_0toN1(6); // get a number from 1 to 6
        cout << r << " ";
        }
}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


int rand_0toN1(int n) {
    return (rand() % n) + 1;
}
