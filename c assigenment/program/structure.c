/*Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 3 
students and print them.*/

#include<stdio.h>
#include<conio.h>
struct student
{
    char name[50];
    int marks;
    int roll;
}s1[50];

int main()
{
    for (int i=0; i < 3; i++)
    {
        printf("enter student name:-");
        scanf("%s",s1[i].name);

        printf("enter student roll number:-");
        scanf("%d",&s1[i].roll);

        printf("enter student marks:-");
        scanf("%d",&s1[i].marks);
        printf("\n");
    }
    for(int j = 0; j < 3; j++)
    {
        printf("\n");
        printf("student %d\n",j+1);
        printf("name:- %s\n",s1[j].name);
        printf("roll number:- %d\n",s1[j].roll);
        printf("marks:- %d\n",s1[j].marks);
        printf("\n");
    }
    
    
    return 0;
}