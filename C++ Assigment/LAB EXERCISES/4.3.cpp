// 3. Variable Scope
// o Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// o Objective: Reinforce the concept of variable scope.


#include <iostream>
using namespace std;
 
// Global variable
int num = 100;
 
void global()
{
	//global variable
	cout << "\n\nglobal number in func = " << num ;
}
void local()
{
	//local variable
	int num = 50;
	cout << "\nlocal number in func = " << num ;
}
 
int main()
{
	cout << "\nMAIN global number = " << num ;
	global(); //global variable
	local();  //local variable
 
	cout << "\n\nback in main global number = " << num ;
	return 0;
}
