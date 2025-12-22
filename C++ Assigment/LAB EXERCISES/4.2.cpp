// 2. Factorial Calculation Using Recursion
// o Write a C++ program that calculates the factorial of a number using recursion.
// o Objective: Understand recursion in functions.



#include <iostream>
using namespace std;


int fact(int n)
{
    if (n == 0)
    {
        return 1;  
    }
    else
    {
        return n * fact(n - 1);  
    }
}


int main()
{
    int num = 5;
    cout << "factorial of " << num << " is " << fact(num);
    return 0;
}
