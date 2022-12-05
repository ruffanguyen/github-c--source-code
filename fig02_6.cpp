// Slide 84 - slide 87 chapter 2.
#include<iostream>
using namespace std;

int main() {
    int grade;
    int aCounter = 0, bCounter = 0, cCounter = 0, dCounter = 0, eCounter = 0, fCounter = 0;
    cout << "Enter the letter grade." << endl
         << "Enter the EOF character to end input" << endl;
    while ((grade = cin.get()) != EOF) {
        switch (grade) {
            case 'a':
            case 'A':
                ++aCounter;
                break;
            case 'b':
            case 'B':
                ++bCounter;
                break;
            case 'c':
            case 'C':
                ++cCounter;
                break;
            case 'd':
            case 'D':
                ++dCounter;
                break;
            case 'e':
            case 'E':
                ++eCounter;
                break;
            case 'f':
            case 'F':
                ++fCounter;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                cout << "Incorrect letter grade entered."
                     << "Enter a new grade." << endl;
                break;
        }
    }
    cout << "\n\nTotals for each letter grade are: "
        << "\nA: " << aCounter
        << "\nB: " << bCounter
        << "\nC: " << cCounter
        << "\nD: " << dCounter
        << "\nE: " << eCounter
        << "\nF: " << fCounter
        << endl;
    return 0;
}