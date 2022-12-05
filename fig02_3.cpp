#include<bits/stdc++.h>
using namespace std;

int main() {
    int grade;
    int total = 0;
    int gradeCounter = 0;
    double average;
    while (true) {
        cout << "Enter grade, -1 to end: ";
        cin >> grade;
        if (grade == -1)
            break;
        gradeCounter++;
        total += grade;
    }
    if (gradeCounter == 0)
        cout << "No grades were entered" << endl;
    else {
        average = (double)total / gradeCounter;
        cout << fixed << setprecision(2) << average << endl;
    }
    return 0;
}