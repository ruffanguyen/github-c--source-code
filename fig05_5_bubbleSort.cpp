#include<iostream>
#include<iomanip>
using namespace std;

void swap(int *const, int *const);
void bubbleSort(int *, const int);

int main() {
    const int arraySize = 10;
    int a[arraySize] = { 2, 6, 4, 8, 10, 12, 87, 68, 45, 37 };
    cout << "Cac phan tu cua mang ban dau la: " << endl;
    for (int element = 0; element < arraySize; element++)
        cout << setw(4) << a[element];
    cout << endl;
    bubbleSort(a, arraySize);
    cout << "Cac phan tu cua mang sau khi sap xep la: " << endl;
    for (int element = 0; element < arraySize; element++)
        cout << setw(4) << a[element];
    cout << endl;
    return 0;
}

void bubbleSort (int *aPtr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (aPtr[j] > aPtr[j + 1])
                swap(aPtr[j], aPtr[j + 1]);
        }
    }
}

void swap (int *const element1, int *const element2) {
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}
