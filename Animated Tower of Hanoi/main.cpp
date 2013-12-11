#include <cstdlib>
#include <iostream>

using namespace std;

#define MAX_LEVELS 7

// Declare three pole positions, or rather, stacks.
// Each stack is an object containing ring values.
// stacks[3] is an array of three of these objects.

class mystack{
      public:
             int rings[MAX_LEVELS];       // Array of ring values.
             int tos;                     // Top-of-stack index.
             void populate(int size);      // Initialize stack.
             void clear(int size);
             void push(int n);
             int pop(void);
      } stacks[3];
      void mystack::populate(int size) {
           for (int i = 0; i < size; i++)
               rings[i] = i + i;
           tos = -1;
      }
      
      void mystack::clear(int size) {
           for (int i = 0; i < size; i++)
               rings[i] = 0;
           tos = size - 1;
      }
      void mystack::push(int n) {
           rings[tos--] = n;
      }
      
      int mystack::pop(void) {
          int n = rings[++tos];
          rings[tos] = 0;
          return n;
      }
      
      void move_stacks(int src, int dest, int other, int n);
      void move_a_ring(int source, int dest);
      void print_stacks(void);
      void pr_chars(int ch, int n);
      
      int stack_size = 8;

int main(int argc, char *argv[])
{
    while (stack_size > MAX_LEVELS - 1){
    cout << "Enter stack size (0 to exit): ";
    cin >> stack_size;
    }
    if (stack_size == 0)
       return EXIT_SUCCESS;
    stack_size += 1;
    stacks[0].populate(stack_size);
    stacks[1].clear(stack_size);
    stacks[2].clear(stack_size);
    print_stacks();
    move_stacks(stack_size, 0, 2, 1);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

// Move stacks: solve problem recursively...
// move N stacks by assuming problem soved for N-1.
// src = source stack, dest = destination stack.

void move_stacks(int n, int src, int dest, int other){
     if (n == 1)
        move_a_ring(src, dest);
     else {
          move_stacks(n-1, src, other, dest);
          move_a_ring(src, dest);
          move_stacks(n-1, other, dest, src);
     }
}

// Move a Ring: Pop off a ring from source (src) stack,
// place it on destination stack, and pring new state.

void move_a_ring(int source, int dest){
     int n = stacks[source].pop();     // Pop off source.
     stacks[dest].push(n);             // Push onto dest.
     print_stacks();
}

// Print Stacks: For each physical level, print the 
// ring for each of the three stacks.

void print_stacks(void) {
     int n = 0;
     for (int i = 0; i < stack_size; i++) {
         for (int j = 0; j < 3; j++) {
             n = stacks[j].rings[i];
             pr_chars(' ', 12 - n);
             pr_chars('*', 2 * n);
             pr_chars(' ', 12 - n);
         }
         cout << endl;
     }
     system("PAUSE");
}

void pr_chars(int ch, int n) {
     for (int i = 0; i <n; i++)
         cout << (char) ch;
}
