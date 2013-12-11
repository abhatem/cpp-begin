#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int rand_0toN1(int n);
void select_object();

char *color[4] =
            {"red", "blue", "orange", "green"};
char *shape[2] =
            {"cube", "ball"};
            

int main(int argc, char *argv[])
{
    
    int n, i;
    
    
    srand(time(NULL));
    
    while(1){
    
    cout << "Enter a number and press ENTER (0 or less to Exit): ";
    cin >> n;
 
 if (n <= 0) {
       break;
       }
    
    for (i = 1; i <= n; i++) {
        select_object();
}
}
    system("PAUSE");
    return EXIT_SUCCESS;
}

int rand_0toN1(int n) {
    return rand() % n;
}


void select_object(){
     int c; //represents the colors
     int s; //represents the shapes
     int object;
     
     object = rand_0toN1(8);
     
     c = object % 4;
     s = object / 4;
     
     cout << color[c] << " " << shape[s] << endl;
     }
