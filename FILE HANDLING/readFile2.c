// ! C program to read to a file using fgets() ;

#include <stdio.h>

int main()

{

    FILE *file_name;

    char c[100];

    file_name = fopen("Write.txt", "r");

    if (file_name == NULL)
    {

        printf("File doesn't exist !");
    }
    else
    {

        printf("File opened\n\n");

        while (!feof(file_name))
        {

            fgets(c, 100, file_name); // ! Structure => fgets(variable_name, size, file_pointer) ;

            printf("%s", c);
        }

        fclose(file_name);
    }

    getchar();
}
