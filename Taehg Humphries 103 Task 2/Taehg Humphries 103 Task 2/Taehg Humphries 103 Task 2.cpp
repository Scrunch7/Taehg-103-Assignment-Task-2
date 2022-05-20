#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int numArray[3], i, sum = 0;
    int* ptr;

    cout << "Enter any 3 numbers :";

    for (i = 0; i < 3; i++) {
        cin >> numArray[i];
    }

    ptr = numArray;

    for (i = 0; i < 3; i++) {
        if (numArray[i] < 0) {

            continue;

        }
        sum = sum + *(ptr + i);
    }

    cout << "\nSum of numbers in the array = " << sum << "\n";

}