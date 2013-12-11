#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long read_with_seperators(string s);
bool prime(long long n);
long long next_prime(long long n);

int main(int argc, char *argv[])
{
    
    string s;
    long long n;
    cout << "Enter a number: ";
    cin >> s;
    n = read_with_seperators(s);
    cout << next_prime(n) << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

#define GROUP_SEP ','

long long read_with_seperators(string s){
     for (int i = 0; i < s.size(); i++){
         if (s[i] == GROUP_SEP)
            s.erase(i, 1);
         }
         return atoll(s.c_str());
     }
bool prime(long long n) {
     int i;
     for ( i = 2; i <= sqrt(n); i++) {
         if (n % i == 0) // if i devides n evenly
            return false; // n is not prime
            }
         return true ; // if no divisor found then n is prime.
     }
long long next_prime(long long n) {
     for (long long i = n;/*infinite loop*/; i++) {
         if (prime(i)) {
                       return i;
                       }
}             }
         
