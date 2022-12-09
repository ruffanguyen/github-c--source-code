#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctime>
using namespace std;

int main() {
    const int size = 7;
    int frequency[size] = {0};
    srand(time(0));
    for (int i = 1; i <= 6000; i++) {
        ++frequency[1 + rand() % 6];
    }
    cout << "Face" << setw(17) << "Frequency" << endl;
    for (int face = 1; face <= 6; face++) {
        cout << setw(4) << face << setw(17) << frequency[face] << endl;
    }
    return 0;
}