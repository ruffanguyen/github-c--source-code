#include<iostream>
using namespace std;

int main() {
    char str1[100], str2[100];
    cout << "Enter the first sentence: ";
    cin.get(str1, 100);
    cin.ignore();
    cout << "Enter the second sentence: ";
    cin.getline(str2, 100);
    //cin.get(str2, 100);
    cout << "The first sentence entered is: " << str1 << endl
         << "The second sentence entered is: " << str2 << endl;
    return 0;
}