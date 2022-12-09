#include<iostream>
#include<iomanip>
using namespace std;

void printArray (int [][3]);

int main() {
    int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
    int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5};
    int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 }};
    cout << "Values in array1 by row are: " << endl;
    printArray(array1);
    cout << "Values in array2 by row are: " << endl;
    printArray(array2);
    cout << "Values in array3 by row are: " << endl;
    printArray(array3);
    return 0;
}

void printArray(int a[][3]) {
    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 3; column++)
            cout << setw(4) << a[row][column];
        cout << endl;
    }
}