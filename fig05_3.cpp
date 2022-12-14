#include<iostream>
#include<cctype>
using namespace std;

void convertToUpperCase (char *);

int main() {
    char phrase[] = "characters and $32.98";
    cout << "The phrase before conversion is: " << phrase << endl;
    convertToUpperCase(phrase);
    cout << "The phrase after conversion is: " << phrase << endl;
    return 0;
}

void convertToUpperCase (char *sPtr) {
    while (*sPtr != '\0') {
        if (islower(*sPtr))
            *sPtr = toupper(*sPtr);
        *sPtr++;
    }
}