#include <cstdlib>
#include <iostream>

using namespace std;

void sort(int n);
void swap(double *p1, double *p2);

double a[10];

int main(int argc, char *argv[])
{
    int i;
    
    for(i = 0; i < 10; i++){
    cout << "Enter array element #" << i << ": " ;
    cin >> a[i];
}
    sort(10);
    
    cout << "Here is the array sorted:" << endl;
    for (i = 0; i < 10; i++)
    cout << a[i] << ", ";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void sort(int n){
     int i, j, high;
     
     for (i = 0; i < n - 1; i++){
         high = i;
         for (j = i + 1; j < n; j++) {
             if(a[j] > a[high])
             high = j;
             if(i != high)
             swap(&a[i], &a[high]);
             }
         }
}
void swap(double *p1, double *p2){
     double temp = *p1;
     *p1 = *p2;
     *p2 = temp;
     }
