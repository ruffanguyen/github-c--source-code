#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

int main() {
    char s1[20] = "12345",
         s2[10] = "you",
         s3[10] = "love";
    long long res;
    // find the value of 9^3 using a function in math.h library
    res = pow(9,3);
    cout << "Using math.h: " << res << endl;
    // Convert a string to long long using a function atol in stdlib.h library
    long long a = atol(s1);
    cout << "Using stdlib.h: " << a << endl;
    // Copy the string s3 into s2 using a function in string.h library
    strcpy(s2,s3);
    cout << "Using string.h: " << s2 << s3 << endl;
    return 0;
}