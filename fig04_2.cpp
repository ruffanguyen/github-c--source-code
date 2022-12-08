#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    for (int i = 0; i < arraySize; i++)
        sum += array[i];
    cout << "Total of array elements values is: " << sum << endl;
    return 0;
}