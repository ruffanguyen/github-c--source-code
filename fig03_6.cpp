#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    // int seed;
    // cout << "Enter seed: ";
    // cin >> seed;
    // cout << endl;
    // srand(seed);
    srand(time(0));
    for (int counter = 1; counter <= 10; counter++) {
        cout << setw(10) << (1 + rand() % 6);
        if (counter % 5 == 0)
            cout << endl;
    }
    return 0;
}