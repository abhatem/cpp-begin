#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class node{
      public:
      string name;
      int age;
      node *next;
      node(string input, int ag) {name = input; age = ag; next = NULL;};
      };

void delete_list(node *p_node);

int main(int argc, char *argv[])
{
     
    node *root = NULL;
    node *p_node, *new_node;
    string a_name;
    int ag;
    int j = 1;
    cout << "Welcome to age sorter." << endl;
    cout << "Enter an age then a name and the program will print them orderd by age.";
    cout << endl << "================================================";
    while (true) {
          
          cout << endl;
          cout << j << "." << endl;
          cout << "Enter an age (0 to exit): " ;
          cin >> ag;
          
          if (ag == 0){
             break;
             system("PAUSE");
             return EXIT_SUCCESS;
          }
          
          // Try to fix that stuff.
          cout << "Enter a name: " ;
          cin >> a_name;
          
    new_node = new node(a_name, ag);
    
    // If list is new or node goes at begining,
    // then insert as root node. Otherwise, 
    // search for a node to insert node AFTER.
    
    if (root == NULL || ag < root->age) {
             new_node->next = root;
             root = new_node;
    } else {
           p_node = root;
           while (p_node->next && ag > p_node->next->age){
                 p_node = p_node->next;
                 }
                 new_node->next = p_node->next;
                 p_node->next = new_node;
           }
    j++;
    }
    p_node = root;            // Print out all nodes
    int i = 1;
    while (p_node) {
          cout << endl << endl << i << "." << endl;
          cout << p_node->name << endl << p_node->age << endl; 
          cout << "--------------------------" ;
          i++;
          p_node = p_node->next;
          }
    
    system("PAUSE");
    p_node = root;
    delete_list(p_node);
    return EXIT_SUCCESS;
}

void delete_list(node *p_node){
     node *temp;
     while (p_node) {
           temp = p_node;
           p_node = p_node->next;
           delete temp;
           }
     }
