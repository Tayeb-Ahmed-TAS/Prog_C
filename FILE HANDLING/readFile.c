// ! C program to read to a file using fgetc() ;

#include <stdio.h>

int main()

{

    FILE *file_name;

    char c;

    file_name = fopen("Write.txt", "r");

    if (file_name == NULL)
    {

        printf("File doesn't exist");
    }
    else
    {

        printf("File opened\n\n");

        while (!feof(file_name))
        {

            // ! fgetc() is used to read a single character ;

            c = fgetc(file_name);

            printf("%c", c);
        }

        fclose(file_name);
    }

    getchar();
}
