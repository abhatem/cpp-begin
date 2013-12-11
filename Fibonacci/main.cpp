#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int long long fibo(int n);
string output_formated_string(long long num);

int main(int argc, char *argv[])
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    string s = output_formated_string(fibo(n));
    cout << "Fibo(" << n << ") = " << s << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


long long fibo(int n) {
     if (n < 2)
     return 1;
     long long temp1 = 1;
     long long temp2 = 1;
     long long total = 0;
     while (n-- > 1) {
           total = temp1 + temp2;
           temp2 = temp1;
           temp1 = total;
           }
           return total;
}

#define GROUP_SEP ','
#define GROUP_SIZE 3

string output_formated_string(long long num) {
       // Read data into string s.
       stringstream temp, out;  
       temp << num;
       string s = temp.str();
       
       // Write first characters, in front of 
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
      out << s.substr(i); // Write the rest of digits.
      return out.str(); // Convert stream -> string.
}         
