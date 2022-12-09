#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int sum = 0;
    int a[4][3];
    cout << "Enter the values of array 4 rows 3 columns: ";
    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            cin >> a[row][column];
        }
    }
    cout << "\nThe values of array are: " << endl;
    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            cout << setw(4) << a[row][column];
        }
        cout << endl;
    }
    for (int row = 0; row < 4; row++) {
        for (int column = 0; column < 3; column++) {
            sum += a[row][column];
        }
    }
    cout << "Total of array's values: " << sum << endl;
    return 0;
}