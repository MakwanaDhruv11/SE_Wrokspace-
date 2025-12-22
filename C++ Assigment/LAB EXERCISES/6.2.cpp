// 2. Class for Bank Account
// o Create a class BankAccount with data members like balance and member functions
// like deposit and withdraw. Implement encapsulation by keeping the data members
// private.
// o Objective: Understand encapsulation in classes.


#include <iostream>
using namespace std;


class bank_acc
{
private:
    int balance;


public:
    void main_bal(int b)
    {
        balance = b;
    }


    void deposit(int amount)
    {
        balance = balance + amount;
    }


    void withdraw(int amount)
    {
        if (amount <= balance)
            balance = balance - amount;
        else
        cout<<"\nu dont have that much amount to withdraw";
    }


    int final_bal()
    {
        return balance;
    }
};


int main()
{
    bank_acc acc;


    acc.main_bal(1000);


    acc.deposit(200);
    acc.withdraw(2000);


    cout << "\nFinal balance : " << acc.final_bal() ;
    return 0;
}
