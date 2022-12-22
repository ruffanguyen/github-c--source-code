#include<iostream>
#include<iomanip>
using namespace std;

// structure definition
struct Time {
    int hour;       // 0 - 23
    int minute;     // 0 - 59
    int second;     // 0=- 59
};   // end struct Time

void printUniversal (const Time&);
void printStandard (const Time&);

int main() {
    Time dinnerTime;    // variable of new type Time

    dinnerTime.hour = 18;       // set hour member of dinnerTime
    dinnerTime.minute = 30;     // set minute of dinnerTime
    dinnerTime.second = 0;      // set second of dinnerTime

    cout << "Dinner will be held at ";
    printUniversal(dinnerTime);
    cout << " universal time,\nwhich is ";
    printStandard(dinnerTime);
    cout << " standard time.\n";


    dinnerTime.hour = 29;       // set hour to invalid value
    dinnerTime.minute = 73;     // set minute to invalid value
    
    cout << "\nTime with invalid values: ";
    printUniversal(dinnerTime);
    cout << endl;
    return 0;
}

// print time in universal-time format
void printUniversal (const Time  &t) {
    cout << setfill('0') << setw(2) << t.hour << ":"
        << setw(2) << t.minute << ":"
        << setw(2) << t.second;
}

// print time in standard-time format
void printStandard (const Time &t) {
    cout << ((t.hour == 0 || t.hour == 12) ? 12 : t.hour % 12) << ":" << setfill('0')
         << setw(2) << t.minute << ":"
         << setw(2) << t.second
         << (t.hour < 12 ? "AM" : "PM");

}
