// ! C Program to Display its own Source Code as Output ;

#include <stdio.h>

int main()

{

    FILE *file_name;

    char a;

    file_name = fopen(__FILE__, "r");

    while (!feof(file_name))
    {

        a = fgetc(file_name); // ? Read character ;

        printf("%c", a); // ? Display character ;
    }

    fclose(file_name);

    getchar();
}
