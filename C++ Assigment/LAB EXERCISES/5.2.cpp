// 2. Matrix Addition
// o Write a C++ program to perform matrix addition on two 2x2 matrices.
// o Objective: Practice multi-dimensional arrays.

#include <iostream>
using namespace std;
 
int main()
{
	int a[2][2], b[2][2], sum[2][2];
 
	cout << "\nEnter elements of A matrix : ";
	for (int i = 0; i < 2; i++)
	{
    	for (int j = 0; j < 2; j++)
    	{
        	cin >> a[i][j];
    	}
	}
 
	cout << "\nEnter elements of B matrix : ";
	for (int i = 0; i < 2; i++)
	{
    	for (int j = 0; j < 2; j++)
    	{
        	cin >> b[i][j];
    	}
	}
 
	for (int i = 0; i < 2; i++)
	{
    	for (int j = 0; j < 2; j++)
    	{
        	sum[i][j] = a[i][j] + b[i][j];
    	}
	}
	cout << "\nSum of the two matrix is : ";
	for (int i = 0; i < 2; i++)
	{
    	for (int j = 0; j < 2; j++)
    	{
    	   cout << sum[i][j] << " ";
    	}
    	cout << endl;
	}
	return 0;
}
