// ! C program to write to a file using fputc() ;

#include <stdio.h>
#include <string.h>

int main()

{

    FILE *file_name;

    char name[1000] = "Tony Stark => Robert Downey  JR.";

    int len = strlen(name);

    file_name = fopen("Write.txt", "w"); // ?  MODE => (w === Over wight) , (a === The next text will be added to the previous text) ;

    if (file_name == NULL)
    {

        printf("File doesn't exist");
    }
    else
    {

        printf("File Opened\n");

        for (int i = 0; i < len; i++)
        {

            // ! fputc() is used to write a single character ;

            fputc(name[i], file_name);
        }

        printf("The file is written successfully\n");

        fclose(file_name);
    }
}