#include<iostream>
#include<iomanip>
using namespace std;

void modifyArray(int [], int);
void modifyElement(int);

int main() {
    const int arraySize = 5;
    int a[arraySize] = {0, 1, 2, 3, 4};
    cout << "Effects of passing entire array by reference:"
        << "\n\nThe value of the original array are:\n";
    for (int i = 0; i < arraySize; i++)
        cout << setw(3) << a[i] << " ";
    modifyArray(a, arraySize);
    cout << "\nThe values of the modified array are:\n";
    for (int i = 0; i < arraySize; i++)
        cout << setw(3) << a[i] << " ";
    cout << "\n\n\n"
        << "Effects of passing array element by value:"
        << "\n\nThe value of a[3] is " << a[3] << endl;
    modifyElement(a[3]);
    cout << "The vaue of a[3] is " << a[3] << endl;
    return 0;
}

void modifyArray (int b[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++)
        b[i] *= 2;
}

void modifyElement (int a) {
    cout << "Value in modifyElement is "
        << (a *= 2) << endl;
}