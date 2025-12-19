// 1. Grade Calculator
// o Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.
// o Objective: Practice conditionalstatements(if-else).


#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A";
    else if (marks >= 75)
        cout << "Grade: B";
    else if (marks >= 60)
        cout << "Grade: C";
    else if (marks >= 40)
        cout << "Grade: D";
    else
        cout << "Grade: F";

    return 0;
}
