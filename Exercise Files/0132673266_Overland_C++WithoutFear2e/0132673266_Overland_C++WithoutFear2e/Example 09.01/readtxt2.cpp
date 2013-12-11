#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    int c;   // input character
    int i;   // loop counter
    char filename[81];
    char input_line[81];

    if (argc > 1)
        strncpy(filename, argv[1], 80);
    else {
        cout << "Enter a file name and press ENTER: ";
        cin.getline(filename, 80);
    }

    ifstream file_in(filename);

    if (! file_in) {
        cout << "File " << filename << " could not be opened." << endl;
        system("PAUSE");
        return -1;
    }

    while (1) {
        for (i = 1; i <= 24 && ! file_in.eof(); i++) {
            file_in.getline(input_line, 80);
            cout << input_line << endl;
        }
        if (file_in.eof())
            break;
        cout << endl << "More? (Press 'Q' and ENTER to quit.)";
        cin.getline(input_line, 80);
        c = input_line[0];
        if (c == 'Q' || c == 'q')
            break;
    }
    system("PAUSE"); 
    return 0;
}
