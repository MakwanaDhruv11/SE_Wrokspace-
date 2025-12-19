// 3. Operator Demonstration
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.
// o Objective: Reinforce understanding of different types of operators in C++.


#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;

    // Arithmetic operators
    cout << "Arithmetic Operators" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;

    // Relational operators
    cout << endl << "Relational Operators" << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a == b = " << (a == b) << endl;

    // Logical operators
    cout << endl << "Logical Operators" << endl;
    cout << "(a > b && b > 0) = " << (a > b && b > 0) << endl;
    cout << "(a > b || b > 10) = " << (a > b || b > 10) << endl;
    cout << "!(a == b) = " << !(a == b) << endl;

    // Bitwise operators
    cout << endl << "Bitwise Operators" << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    return 0;
}
