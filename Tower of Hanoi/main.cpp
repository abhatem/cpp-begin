#include <cstdlib>
#include <iostream>

using namespace std;
void move_rings(int n, int src, int dest, int other);
void exec_move(int src, int dest);

int main(int argc, char *argv[])
{
    int n; // stack is three rings high
 while (true) {   
    cout << "Enter the number of the rings(0 or less = Exit) and press Enter: ";
    cin >> n;
    if ( n <= 0)
    break;
    
    move_rings(n, 1, 3, 2);
    
}
    system("PAUSE");
    return EXIT_SUCCESS;
}


void move_rings(int n, int src, int dest, int other) {
    
    
     if (n == 1) {
           cout << "Move from " << src << " to " << dest << endl;
           } else { 
           move_rings(n - 1, src, other, dest);
           exec_move(src, dest);
           move_rings(n - 1, other, dest, src);
           }
           }

void exec_move(int src, int dest) {
     cout << "Move from " << src << " to " << dest << endl;
     }
