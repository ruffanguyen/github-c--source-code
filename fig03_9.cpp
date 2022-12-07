#include<iostream>
#include<iomanip>
using namespace std;

long long factorial(int);

int main() {
    int n;
    cout << "Enter the first n factorial numbers: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cout << setw(3) << i <<"!" << " = " << factorial(i) << endl;
    }
    return 0;
}

long long factorial (int x) {
    if (x == 0 || x == 1)
        return 1;
    return x * factorial(x - 1);
}