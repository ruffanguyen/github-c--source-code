#include<iostream>
#include<iomanip>
using namespace std;

const int students = 3;
const int exams = 4;

void printArray(int [][4], int, int);
int minimum(int [][4], int, int);
int maximum(int [][4], int, int);
double average(int [], int);

int main() {
    int studentGrades[students][exams] =
    {{ 77, 68, 86, 73 },
     { 96, 87, 89, 78 },
     { 70, 90, 86, 81 } };
    printArray(studentGrades, students, exams);
    cout << "\nLowest grade: " << minimum(studentGrades, students, exams);
    cout << "\nHighest grade: " << maximum(studentGrades, students, exams);
    for (int person = 0; person < students; person++)
        cout << "\nThe average grade for student " << person << " is " << fixed << setprecision(2) << average(studentGrades[person], exams);
    return 0;
}

void printArray(int a[][4], int people, int grades) {
    cout << "The array is: " << endl;
    cout << setw(21) << "[0]" << setw(4) << "[1]" << setw(4) << "[2]" << setw(4) << "[3]" << endl;
    for (int student = 0; student < people; student++) {
        cout << "studentGrades[" << student << "]";
        for (int gradeExam = 0; gradeExam < grades; gradeExam++) {
            cout << setw(4) << a[student][gradeExam];
        }
        cout << endl;
    }
}

int minimum(int a[][4], int people, int grades) {
    int min = a[0][0];
    for (int student = 0; student < people; student++) {
        for (int gradeExam = 0; gradeExam < grades; gradeExam++) {
            if (min > a[student][gradeExam])
                min = a[student][gradeExam];
        }
    }
    return min;
}

int maximum(int a[][4], int people, int grades) {
    int max = a[0][0];
    for (int student = 0; student < people; student++) {
        for (int gradeExam = 0; gradeExam < grades; gradeExam++) {
            if (max < a[student][gradeExam])
                max = a[student][gradeExam];
        }
    }
    return max;
}

double average(int a[], int grades) {
    int sum = 0;
    for (int gradeExam = 0; gradeExam < grades; gradeExam++) {
        sum += a[gradeExam];
    }
    return (double)sum / grades;
}
