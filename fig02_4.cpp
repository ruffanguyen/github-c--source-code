#include<bits/stdc++.h>
using namespace std;

int main() {
    int result;
    int studentCounter = 1;
    int passes = 0;
    int failures = 0;
    while (studentCounter <= 10) {
        cout << "Enter result (1 = pass, 2 = fail): ";
        cin >> result;
        if (result == 1)
            passes++;
        else 
            failures++;
        studentCounter++;
    }
    cout << "Passes: " << passes << endl
         << "Failures: " << failures << endl;
    if (passes >= 8)
        cout << "Raise tuition";
    return 0;
}