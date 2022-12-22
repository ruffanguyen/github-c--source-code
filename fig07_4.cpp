#include<bits/stdc++.h>
using namespace std;

int main() {
    const int size = 100;
    char buffer[size];
    cout << "Enter a sentence: ";
    cin.read(buffer, 20);
    cout << "\nThe sentence entered was: " << endl;
    cout.write(buffer, cin.gcount());
    cout << endl;
    return 0;
}