#include<iostream>
using namespace std;

long long fibonacci (long long);

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}

long long fibonacci (long long n) {
    if (n == 0 || n == 1)
        return n;
    return fibonacci(n -1) + fibonacci(n - 2);
}