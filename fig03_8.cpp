#include<iostream>
using namespace std;
static int num1 = 0, num2 = 1, num3 = 0;

int fibonacci (int);

int main() {
    int n;
    cout << "Enter the first n fibonacci numbers: ";
    cin >> n;
    int count;
    count = n - 2;
    if (n == 1)
        cout << 0 << " ";
    else if (n >= 2)
        cout << 0 << " " << 1 << " ";
    if (n >= 3)
        fibonacci(count);
    return 0;
}

int fibonacci (int count) {
    if (count > 0) {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout << num3 << " ";
        count--;
    }
    return fibonacci(count);
}