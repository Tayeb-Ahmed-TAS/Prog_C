// ! C program to write to a file using fprintf() ;

#include <stdio.h>
#include <string.h>

int main()

{

    FILE *file_name;

    char name[100];

    int age;

    file_name = fopen("Write.txt", "a");

    if (file_name == NULL)
    {

        printf("File doesn't exist !");
    }
    else
    {

        printf("File Opened\nEnter your name => ");

        gets(name);

        strupr(name);

        printf("Enter your age => ");

        scanf("%d", &age);

        fprintf(file_name, "Name : %s  ,  Age : %d\n", name, age); // ? Structure: fprintf(file_pointer, "format_scecifiers", variable_names)     here => name and age are variable_names;

        printf("File is written successfully");

        fclose(file_name);
    }
}