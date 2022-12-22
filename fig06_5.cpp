#include<iostream>
using namespace std;

class Count {
    public:
        int x;
        void print() {
            cout << x << endl;
        }
};

int main() {
    Count Counter;
    Count *counterPtr = &Counter;
    Count &counterRef = Counter;
    cout << "Assign 1 to x and print using the object's name: ";
    Counter.x = 1;
    Counter.print();
    cout << "Assign 2 to x and print using a reference: ";
    counterRef.x = 2;
    counterRef.print();
    cout << "Assign 3 to x and print using a pointer: ";
    counterPtr -> x = 3;
    counterPtr -> print();
    return 0;
}