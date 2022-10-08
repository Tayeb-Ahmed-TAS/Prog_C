// ! C program to create , open and close file ;

#include <stdio.h>

int main()

{

    FILE *file_name;

    file_name = fopen("Write.txt", "w"); // ? Here, Write.txt == file name with extension and w == file mode ;

    if (file_name == NULL)
    {

        printf("File doesn't exist");
    }
    else
    {

        printf("File opened");

        fclose(file_name);
    }
}
