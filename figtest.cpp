// This is a file for you to review what you studied in this chapter.
#include<iostream>
using namespace std;
#include"time1.h"
#include"time1.cpp"

int main() {
    Time t;
    cout << "The initial universal time is: ";
    t.printUniversal();
    cout << "\nThe initial standard time is: ";
    t.printStandard();
    t.setTime(13, 27, 6);
    cout << "\n\nUniversal time after set time is: ";
    t.printUniversal();
    cout << "\nStandard time after set time is: ";
    t.printStandard();
    t.setTime(99, 99, 99);
    cout << "\n\nAfter attempting invalid settings:"
         << "\nUniversal Time: ";
    t.printUniversal();
    cout << "\nStandard Time: ";
    t.printStandard();
    cout << endl;
    return 0;
}