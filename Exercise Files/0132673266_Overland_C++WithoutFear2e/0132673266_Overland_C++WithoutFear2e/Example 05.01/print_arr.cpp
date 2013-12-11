#include <iostream>
using namespace std;

int main() {
    int i;
    double scores[5] = {0.5, 1.5, 2.5, 3.5, 4.5};

    for(i = 0; i < 5; i++) {
        cout << scores[i] << "  ";
    }
    cout << endl;
    system("PAUSE");
    return 0;
}

