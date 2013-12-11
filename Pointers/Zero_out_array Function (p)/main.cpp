#include <cstdlib>
#include <iostream>

using namespace std;

void zero_out_array(int *arr, int n);

int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(int argc, char *argv[])
{
    int *p;
    int i;
    zero_out_array(a, 10);
    p=a;
    for (i=0 ; p < a + 10; i++){
        cout << *p << ", " ;
    p++;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}


// zero out array function.
// assign 0 to all elements of an int array of size n.
void zero_out_array(int *arr, int n){
     while(n-- > 0) {  // do n times
               *arr++ = 0; // assign 0 to the element pointed by p
                             // point to next element
               }
     }
     
