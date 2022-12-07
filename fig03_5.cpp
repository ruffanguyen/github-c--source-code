#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main() {
    int face,
        frequency1 = 0,
        frequency2 = 0,
        frequency3 = 0,
        frequency4 = 0,
        frequency5 = 0,
        frequency6 = 0;
    for (int roll = 1; roll <= 6000; roll++) {
        face = 1 + rand() % 6;
        switch(face) {
            case 1:
                frequency1++;
                break;
            case 2:
                frequency2++;
                break;
            case 3:
                frequency3++;
                break;
            case 4:
                frequency4++;
                break;
            case 5:
                frequency5++;
                break;
            case 6:
                frequency6++;
                break;
            default:
                cout << "Program should never get here!";
                break;
        }
    }
    cout << "Face" << setw(13) << "Frequency"
         << endl << setw(4) << "1" << setw(13) << frequency1
         << endl << setw(4) << "2" << setw(13) << frequency2
         << endl << setw(4) << "3" << setw(13) << frequency3
         << endl << setw(4) << "4" << setw(13) << frequency4
         << endl << setw(4) << "5" << setw(13) << frequency5
         << endl << setw(4) << "6" << setw(13) << frequency6;
    return 0;
}