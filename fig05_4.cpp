#include<iostream>
using namespace std;

void printCharacters (const char *);

int main() {
    char phrase[] = "Print characters of a string.";
    cout << "The string is: " << endl;
    printCharacters (phrase);
    cout << endl;
}

void printCharacters (const char *sPtr) {
    while (*sPtr != '\0') {
        cout << *sPtr++;
    }
}

