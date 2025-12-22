// 3. Inheritance Example
// o Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept of inheritance.


#include <iostream>
using namespace std;


class person
{
public:
    string name;
    int age;
};


class student : public person
{
public:
    int id;
};


class teacher : public person
{
public:
    string sub;
};


int main()
{
    student s;
    teacher t;


   
    s.name = "harsh";
    s.age = 22;
    s.id = 111;


   
    t.name = "prakruti madam";
    t.age = 33 ;
    t.sub = "python";


   
    cout << "\nStudent: " << s.name << ", \nAge: " << s.age  << ", \nid: " << s.id ;


   
    cout << "\nTeacher: " << t.name << ", \nAge: " << t.age << ", \nSubject: " << t.sub ;


    return 0;
}

