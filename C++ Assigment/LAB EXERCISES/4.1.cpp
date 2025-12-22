// 1. Simple Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.
// o Objective: Practice defining and using functions in C++.


#include <iostream>
using namespace std;


float add(float a, float b)
{
    return a + b;
}


float sub(float a, float b)
{
    return a - b;
}


float multi(float a, float b)
{
    return a * b;
}


float div(float a, float b)
{
    return a / b;
}


int main()
{
    float num1, num2;
    char select;


    cout << "Enter num 1 : ";
    cin >> num1;


    cout << "Enter num 2 : ";
    cin >> num2;
   
    cout << "what u want to do +, -, *, / : ";
    cin >> select;


    float result;


    switch (select)
    {
        case '+':
            result = add(num1, num2);
            cout << "\nresult: " << result ;
            break;


        case '-':
            result = sub(num1, num2);
            cout << "\nresult: " << result ;
            break;


        case '*':
            result = multi(num1, num2);
            cout << "\nresult: " << result ;
            break;


        case '/':
            result = div(num1, num2);
            cout << "\nresult: " << result ;
            break;


        default:
            cout << "\nInvalid choice" ;
    }
    return 0;
}

