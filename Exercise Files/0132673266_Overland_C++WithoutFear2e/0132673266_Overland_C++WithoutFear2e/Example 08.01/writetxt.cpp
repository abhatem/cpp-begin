#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char filename[81];

    cout << "Enter a file name and press ENTER: ";
    cin.getline(filename, 80);
    ofstream file_out(filename);
    if (! file_out) {
        cout << "File " << filename << " could not be opened.";
        return -1;
    }
    cout << "File " << filename << " was opened.";
    file_out << "I am Blaxxon," << endl;
    file_out << "the cosmic computer." << endl;
    file_out << "Fear me.";
    file_out.close();
    return 0;
}
