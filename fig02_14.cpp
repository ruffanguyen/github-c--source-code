// Fig. 2.14: fig02_14.cpp
// Preincrementing and postincrementing.
#include <iostream>

using std::cout;
using std::endl;

// function main begins program execution
int main() {
    int c;   // declare variable
    // demonstrate postincrement
    c = 5;   // assign 5 to c
    cout << c << endl;   // print 5
    cout << c++ << endl; // print 5 then postincrement
    cout << c << endl << endl; // print 6 

    // demonstrate preincrement
    c = 5;   // assign 5 to c
    cout << c << endl;   // print 5
    cout << ++c << endl; // preincrement then print 6 
    cout << c << endl;   // print 6 

    return 0;   // indicate successful termination

} // end function main
