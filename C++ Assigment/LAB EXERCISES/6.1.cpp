// 1. Class for a Simple Calculator
// o Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// o Objective: Introduce basic class structure.



#include <iostream>
using namespace std;


class Calc
{
public:
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
};


int main()
{
    Calc c;
    float num1, num2;


    cout << "enter first num: ";
    cin >> num1;
   
    cout << "enter second num: ";
    cin >> num2;


    cout << "\nAddition: " << c.add(num1, num2) ;
    cout << "\nSubtraction: " << c.sub(num1, num2) ;
    cout << "\nMultiplication: " << c.multi(num1, num2) ;
    cout << "\nDivision: " << c.div(num1, num2) ;


    return 0;
}
