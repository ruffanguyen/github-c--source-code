#include<iostream>
using namespace std;

int main() {
    const int size = 100;
    char buffersize[size], buffersize2[size];
    cout << "Enter a sentence: " << endl;
    cin >> buffersize;
    cout << "\nThe string read with cin was:\n" << buffersize << endl;
    cin.get(buffersize2, size, '\n');
    cout << "The string read with cin.get was:\n" << buffersize2 << endl;
    return 0;
}