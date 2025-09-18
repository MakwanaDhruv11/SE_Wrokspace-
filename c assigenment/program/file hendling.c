/*Write a C program to create a file, write a string into it, close the file, then 
open the file again to read and display its contents.*/

#include<stdio.h>

int main()
{
    FILE *fp;
    char det[]={"ved"};
    char a[50];
    
    fp=fopen("test.text","w");
    fprintf(fp,"%s",det);

    fclose(fp);

    fp=fopen("test.text","r");
    fgets(a,50,fp);

    fclose(fp);

    printf("%s",a);
    

    return 0;
}