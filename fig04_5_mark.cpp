#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    const int sizeOfMark = 40;
    const int sizeOfFrequency = 11;
    int marks[sizeOfMark] = {1, 2, 6, 4, 8, 5, 9, 7, 8,
                            10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
                            5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    int frequency[sizeOfFrequency] = {0};
    for (int mark = 1; mark <= 10; mark++) {
        for (int count = 0; count <= sizeOfMark; count++) {
            if (mark == marks[count])
                ++frequency[mark];
        }
    /*for ( int student = 0; student < markSize; student++ )
        ++frequency[ marks[student] ];
*/
    }
    cout << "Rating" << setw(17) << "Frequency" << endl;
    for (int rating = 1; rating < sizeOfFrequency; rating++)
        cout << setw(6) << rating << setw(17) << frequency[rating] << endl;
    return 0;
}