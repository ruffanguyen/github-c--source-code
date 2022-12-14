#include<iostream>
#include<iomanip>
using namespace std;

//prototype
void bubble(int *, const int, bool (*) (int , int));
void swap(int *const, int *const);
bool ascending (int ,int);
bool descending (int , int);

int main() {
    const int arraySize = 10;
    int order;
    int counter;
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    cout << "Enter 1 to sort in ascending order,\n"
         << "Enter 2 to sort in descending order: ";
    cin >> order;
    cout << "\nDate items in original order\n";

    //output original array
    for (counter = 0; counter < arraySize; counter++)
        cout << setw(4) << a[counter];
    
    // sort array in ascending order;pass function ascending
    // as an argument to specify ascending sorting order
    if (order == 1) {
        bubble(a, arraySize, ascending);
        cout << "\nData items in ascending order\n";
    }

    // sort array in descending order; pass function descending
    // as an argument to specify descending sorting order
    else {
        bubble (a, arraySize, descending);
        cout << "\nData items in descending order\n";
    }

    //output sorted array
    for (counter = 0; counter < arraySize; counter++)
        cout << setw(4) << a[counter];
    cout << endl;
    return 0;
}

/* multipurpose bubble sort; parameter compare is a pointer to
   the comparison function that determines sorting order */
void bubble(int work[], const int size, bool (*compare) (int ,int)) {
    for (int pass = 1; pass < size; pass++) {   
        for (int count = 0; count < size - 1; count++) {
            if ((*compare) (work[count], work[count + 1]))
                swap(work[count], work[count + 1]);
        }
    }
}

//swap values at memory locations to which
// elementPtr1 and elementPtr2 point
void swap (int *const elementPtr1, int *const elementPtr2) {
    int hold = *elementPtr1;
    *elementPtr1 = *elementPtr2;
    *elementPtr2 = hold;
}

// determine whether elements are out of order
// for an ascending order sort
bool ascending (int a, int b) {
    return b < a; // swap if b is less than a
}

// determine whether elements are out of order
// for an descending order sort
bool descending (int a, int b) {
    return b > a; // swap if b is greater than a
}