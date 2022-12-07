#include<iostream>
using namespace std;

double maximum (double, double, double);

int main() {
    double num1, num2, num3;
    cout << "Enter three floating-point numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Maximum is: " << maximum(num1, num2, num3) << endl;
    return 0;
}

double maximum (double num1, double num2, double num3) {
    double max = num1;
    if (max <= num2)
        max = num2;
    if (max <= num3)
        max = num3;
    return max;
}