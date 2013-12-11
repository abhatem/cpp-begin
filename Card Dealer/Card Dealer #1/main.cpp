#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int rand_0toN1(int n);
void draw_a_card();

char *suits[4] =
               {"hearts", "diamonds", "spades", "clubs"};
char *ranks[13] =
                {"ace", "two", "three", "four", "five", "six", "seven", "eight",
                "nine", "ten", "jack", "queen", "king" };

int main(int argc, char *argv[])
{
    int n, i;
    srand(time(NULL)); // Set the seed of the random no.
    
    while (1) {
          cout << "Enter no. of cards you want to draw ";
          cout << "(0 or less to Exit): ";
          cin >> n;
          
          if (n <= 0)
          break;
          for (i = 1; i <= n; i++) 
          draw_a_card();
          }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void draw_a_card() {
     int r; // represents the ranks
     int s; // represents the suits
     int card; 
     
     card = rand_0toN1(52);
     
     r = card % 13;
     s = card / 13;
     
     cout << ranks[r] << " of " << suits[s] << endl;
     }


int rand_0toN1(int n){
    return rand() % n;
}
