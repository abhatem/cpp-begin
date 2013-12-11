#include <cstdlib>
#include <iostream>

using namespace std;

#define SIZE_OF_ARRAY 5

int main(int argc, char *argv[])
{
    
    int arr[SIZE_OF_ARRAY];
    int total = 0;
    
    // For each element, prompt for a value,
    // store, and add to total.
    
    for (int& n : arr){
        cout << "Enter array value: ";
        cin >> n;
        total += n;
        }
    cout << "Here are the values: ";
    
    //Print each element.
    
    for (int n : arr)
        cout << n << endl;
    
    cout << "Total is: " << total << endl;
    cout << "Now, I'm going to zero out the values. " << endl;
    
    //Set each element to 0.
    
    for (int&n : arr)
        n = 0;
        
    cout << "Here are the values: ";
    for (int n: arr)
        cout << n << endl;
         
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
