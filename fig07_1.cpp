#include<iostream>
using namespace std;

int main() {
    char *word = "Phuc Nao To";
    cout << "Value of word is: " << word << endl
         << "Value of static_cast <void *> (word) is: " << static_cast <void *> (word) << endl;
    return 0;
}