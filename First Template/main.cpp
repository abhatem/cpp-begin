#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>


#include <ios>
template <typename T>
inline T const& mymax(T const& a, T const& b)
{
       return a<b?b:a;
}

//maximum of two pointers
template <typename T>
inline T* const& mymax(T* const& a, T* const& b)
{
       return *a < *b ? b : a;
}

//maximum of two C-strings
template <typename T>
inline char const* const& mymax(char const* const& a, char const* const& b)
{
       return std::strcmp(a, b) < 0 ? b : a;
}

template <typename T>
inline T const& mymax(T const& a, T const& b, T const& c)
{
       return mymax(mymax(a,b),c);
}

using namespace std;

int main(int argc, char *argv[])
{
   int a = 7;
   int b = 42;
   cout << ::mymax(a, b) << endl;
   
   string s = "zey";
   string t = "you";
   cout << ::mymax(s, t) << endl;
   
   int *p1 = &a;
   int *p2 = &b;
   
   cout << mymax(*p1, *p2) << endl;
   
   char const* s1 = "David";
   char const* s2 = "Nico";
   cout << ::mymax(s1, s2) << endl;
   
   int n1 = 3;
   int n2 = -54;
   int n3 = -234;
   
   cout << mymax(n1, n2, n3) << endl;
   
   cout << mymax(static_cast<int>('5'), 42) << endl;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
