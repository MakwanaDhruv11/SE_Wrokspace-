// 2. Type Conversion
// o Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.
// o Objective: Practice type casting in C++.


#include <iostream>
using namespace std;

int main() {

    int a = 5;
    double b = a; 

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value (a): " << a << endl;
    cout << "Converted to double (b): " << b << endl;


    double x = 9.78;
    int y = (int)x; 

    cout << "\nExplicit Type Conversion:" << endl;
    cout << "Double value (x): " << x << endl;
    cout << "Converted to int (y): " << y << endl;

   
    return 0;
}
