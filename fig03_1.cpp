#include<bits/stdc++.h>
using namespace std;

int square (int);

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << square(i) << " ";
    }
    cout << endl;
    return 0;
}

int square (int x) {
    return x * x;
}