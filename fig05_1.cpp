#include<iostream>
using namespace std;

int cubeByValue (int);

int main() {
    int number = 5;
    cout << "The original value of number is: " << number << endl;
    number = cubeByValue(number);
    cout << "The new value of number is: " << number << endl;
    return 0;
}

int cubeByValue (int number) {
    return number * number * number;
}