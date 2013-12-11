#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>

#define VALUES 10

using namespace std;

int rand_0toN1(int n);

int hits[VALUES];


int main(int argc, char *argv[])
{
    
    
    
    int n = 0; // Number of trails (get the value from user input
    int i = 0; // loop variable
    int r = 0; //holds a random value
   
   while(true) {
               
               // set the values of the hits array to 0
               for (i = 0; i < VALUES; i++) {
                   hits[i] = 0;
                   } 
               
   
    srand(time(NULL)); // set seed for randomizing.
    
    cout << "Enter how many trails and press ENTER: " ;
    cin >> n;
    
    // Run n trails. For each trial, get a num 0 to 9
    // and then increment the corresponding element
    // in the hits array.
    
    for (i = 0; i < n; i++) {
        r = rand_0toN1(VALUES);
        hits[r]++;
        }
        
        // Print all elements in the hits array, along
        // with ratio of hits to EXPECTED hits (n / 10).
        
        for (i = 0; i < VALUES; i++) {
            cout << i << ": " << hits[i] << " Accuracy: ";
            double results = hits[i];
            cout << results / (n / VALUES) << endl ;
            }
}
    system("PAUSE");
    return EXIT_SUCCESS;
}


// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1.

int rand_0toN1(int n) {
    return rand() % n;
}

