#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int total;
    int nums[7];
    cout << "Enter number 1 and press ENTER: ";
    cin >> nums[0];
    cout << "Enter number 2 and press ENTER: ";
    cin >> nums[1];
    cout << "Enter number 3 and press ENTER: ";
    cin >> nums[2];
    cout << "Enter number 4 and press ENTER: ";
    cin >> nums[3];
    cout << "Enter number 5 and press ENTER: ";
    cin >> nums[4];
    cout << "Enter number 6 and press ENTER: ";
    cin >> nums[5];
    cout << "Enter number 7 and press ENTER: ";
    cin >> nums[6];
    for (int i = 0; i < 6; i++) {
        cout << nums[i] << " ";
}

for (int i = 0; i < 6; i++) {
    total += nums[i] + nums[i+1];
    i++;
}
cout << "\nThe total is: " << total << endl ;
    system("PAUSE");
    return EXIT_SUCCESS;
}
