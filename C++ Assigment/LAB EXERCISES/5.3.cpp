// 3. String Palindrome Check
// o Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// o Objective: Practice string operations.

 #include <iostream>
using namespace std;


int palin(string str)
{
    int length = 0;


    while (str[length] != '\0')
    {
        length++;
    }


    int i = 0;
    int j = length - 1;


    while (i < j)
    {
        if (str[i] != str[j])
        {
            return 0;             // for not palindrome
        }
        i++;
        j--;
    }
    return 1;                     // if this then palindrome
}


int main()
{
    string str;


    cout << "enter a string : ";
    cin >> str;


    if (palin(str) == 1)


        cout << "\npalindrome";


    else


        cout << "\nnot palindrome" ;


    return 0;
}
