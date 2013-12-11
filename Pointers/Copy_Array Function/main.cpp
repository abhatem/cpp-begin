#include <cstdlib>
#include <iostream>

using namespace std;
void copy_array(int *p1,int *p2, int n);
int a[5];
int b[5] = {1, 4, 6, 7, 8};

int main(int argc, char *argv[])
{
    int *p;
    
    copy_array(a, b, 5);
    
   
    for (p = a; p < a + 5; p++)
        cout << *p << "  ";

    cout << endl;
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


void copy_array(int *p1,int *p2, int n){
    while (n-- > 0){
        *p1 = *p2;
        p1++;
        p2++;
        }
}
