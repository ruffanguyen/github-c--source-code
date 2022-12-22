#include<iostream>
using namespace std;

class Student {
    public:
        int id;
        string name;
        void insert (int i, string n) {
            id = i;
            name = n;
        }
        void display() {
            cout << "The student id is: " << id << "\nThe student name is: " << name << endl;
        }
};

int main() {
    Student s1;
    Student s2;
    s1.insert(16082003, "Nguyen Ngoc Thien Phuc");
    s2.insert(3092004, "Nguyen Thi Lan Anh");
    s1.display();
    s2.display();
    return 0;
}