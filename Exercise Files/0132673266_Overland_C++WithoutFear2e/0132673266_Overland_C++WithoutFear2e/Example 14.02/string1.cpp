#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char *ptr;
public:
    String();
    String(char *s);
    ~String();

    operator char*()  {return ptr; }
    int operator==(const String &other);
};

int main() {
    String a("STRING 1");
    String b("STRING 2");
    cout << "The value of a is: " << endl;
    cout << a << endl;
    cout << "The value of b is: " << endl;
    cout << b << endl;
    system("PAUSE");
    return 0;
}

// ----------------------------------
// STRING CLASS FUNCTIONS

String::String() {
    ptr = new char[1];
    ptr[0] = '\0';
}

String::String(char *s) {
    int n = strlen(s);
    ptr = new char[n + 1];
    strcpy(ptr, s);
}

String::~String() {
    delete [] ptr;
}

int String:: operator==(const String &other) {
    return (strcmp(ptr, other.ptr) == 0);
}
