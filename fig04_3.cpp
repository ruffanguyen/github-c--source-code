#include<iostream>
#include<iomanip>
using namespace std;

void histogram(int);

int main() {
    const int arraySize = 10;
    int array[arraySize] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    cout << "Element" << setw(13) << "Value" << setw(17) << "Histogram" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << setw(7) << i << setw(13) << array[i] << setw(9);
        histogram(array[i]);
        cout << endl;
    }
    return 0;
}

void histogram(int n) {
    for (int i = 0; i < n; i++)
        cout << "*";
}
