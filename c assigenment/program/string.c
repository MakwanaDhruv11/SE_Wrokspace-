#include<stdio.h>
#include<conio.h>
void main()
{
    char v[50];
    char m[50];

    printf("enter your name:- ");
    scanf("%c",v);
    printf("enter your 'hello':- ");
    scanf("%c",m);

    printf("%c",v);
    printf("%c",strcmp(v,m));
    printf("%c",strchr(v,'e'));



    getch ();
}