#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
    double amount = 0,
           rate = .05,
           principal = 1000.00;
    cout << setw(4) << "Year" << setw(21) << "Amount on deposit" << endl;
    for (int year = 1; year <= 10; year++) {
        amount = principal * pow(1 + rate, year);
        cout << fixed << setprecision(2);
        cout << setw(4) << year << setw(21) << amount << endl;
    }
    return 0;
}