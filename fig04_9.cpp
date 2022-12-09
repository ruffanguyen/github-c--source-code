#include<iostream>
using namespace std;

void ascending (int [], const int);

int main() {
    const int arraySize = 10;
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    cout << "The array original: " << endl;
    for (int item = 0; item < arraySize; item++)
        cout << a[item] << " ";
    cout << endl;
    ascending(a, arraySize);
    cout << "The array after ascending: " << endl;
    for (int item = 0; item < arraySize; item++)
        cout << a[item] << " ";
    return 0;
}

void ascending (int a[], const int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (a[j] > a[i]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}