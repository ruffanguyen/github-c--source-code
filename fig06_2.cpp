#include<iostream>
using namespace std;

class Student {
    public:
    int id;
    string name;
};

int main() {
    Student s1;
    s1.id = 16082003;
    s1.name = "Nguyen Ngoc Thien Phuc";
    cout << "Student id is: " << s1.id << endl
         << "Student name is: " << s1.name << endl;
    return 0;
}