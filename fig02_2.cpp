#include<bits/stdc++.h>
using namespace std;

int main() {
    int grade;
    int total = 0;
    int gradeCounter = 1;
    double average;
    while (gradeCounter <= 10) {
        cout << "Enter grade: ";
        cin >> grade;
        total += grade;
        gradeCounter++;
    }
    average = (double)total / 10;
    cout << "Class average is: " << average << endl;
    return 0;
}