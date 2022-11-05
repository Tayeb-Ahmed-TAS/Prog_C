// ! C program to write to a file using fputs() ;

#include <stdio.h>
#include <string.h>

int main()

{

    FILE *file_name;

    char text[1000];

    file_name = fopen("Write.txt", "a");

    if (file_name == NULL)
    {

        printf("File doesn't exist");
    }
    else
    {

        printf("File Opened.\nWrite your University name => ");

        gets(text);

        strupr(text);

        fputs(text, file_name); // ! Structure => fputs(string, file_pointer) ;

        fputs("\n", file_name); // ? For New Line ;

        printf("File is written successfully");

        fclose(file_name);
    }
}