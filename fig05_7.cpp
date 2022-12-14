#include<iostream>
using namespace std;

void function1 (int);
void function2 (int);
void function3 (int);

int main() {
    void (*f[3]) (int) = {function1, function2, function3};
    int choice;
    cout << "Enter number between 0 to 2, e to end: ";
    cin >> choice;
    while (choice >= 0 && choice < 3) {
        (*f[choice]) (choice);
        cout << "\nEnter number between 0 to 2, e to end: ";
        cin >> choice;
    }
    cout << "Program execution completed." << endl;
    return 0;
}

void function1 (int n) {
    cout << "You entered " << n << " so function1 was called" <<endl;
}

void function2 (int n) {
    cout << "You entered " << n << " so function2 was called" << endl;
}

void function3 (int n) {
    cout << "You entered " << n << " so function3 was called" << endl;
}