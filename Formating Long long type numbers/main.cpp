#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

// define the group seperator and the group size
#define GROUP_SEP ','
#define GROUP_SIZE 3

string output_formated_string(long long num);

using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cout << "Enter the number you want to saperate: ";
    cin >> num;
    cout << output_formated_string(num);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

//the formated number output function
string output_formated_string(int num){
       // Read data into string 
stringstream temp, out;
temp << num;
string s = temp.str();

// Write first charecters, in front of 
// first separator (GROUP_SEP)

int n = s.size() % GROUP_SIZE;
int i = 0;
if (n > 0 && s.size() > GROUP_SIZE) {
      out << s.substr(i, n) << GROUP_SEP;
      i += n;
}

// Handle all the remaining groups.

n = s.size() / GROUP_SIZE - 1;
while (n-- > 0) {
      out << s.substr(i, GROUP_SIZE) << GROUP_SEP;
      i += GROUP_SIZE;
      }
out << s.substr(i); // Write the rest of the digits.
return out.str(); // Convert stream -> string.
}
