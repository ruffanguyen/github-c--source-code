#include<iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

void ascendingSort(int [], const int);
int binarySearch(const int[], const int, const int);

int main() {
    const int size = 40;
    int a[size];
    srand(time(0));
    for (int random = 0; random < size; random++) {
        a[random] = 1 + rand() % 60;
    }
    cout << "Elements before ascending sort:" << endl;
    for (int item = 0; item < size; item++) {
        cout << setw(4) << a[item];
        if (item != 0 && item % 10 == 9)
            cout << endl;
    }
    ascendingSort(a, size);
    cout << "Elements after ascending sort:" << endl;
    for (int item = 0; item < size; item++) {
        cout << setw(4) << a[item];
        if (item != 0 && item % 10 == 9)
            cout << endl;
    }
    int key = rand() % 60 + 1;
    cout << "The key is: " << key << endl;
    int result = binarySearch(a, size, key);
    if (result)
        cout << "The key is element: " << result << endl;
    else
        cout << "Not found the key" << endl;
    return 0;
}

void ascendingSort(int a[], const int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int binarySearch(const int a[], const int size, int key) {
    int middle = size / 2;
    if (key == a[middle])
        return middle;
    else if (key < a[middle]) {
        for (int search = 0; search < middle; search++) {
            if (key == a[search])
                return search;
        }
    } else if (key > a[middle]) {
        for (int search = middle; search < size; search++) {
            if (key = a[search])
                return search;
        }
    }
    return 0;
}
