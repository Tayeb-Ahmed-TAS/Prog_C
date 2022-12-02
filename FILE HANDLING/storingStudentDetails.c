// ! C program to Store Details of Students in a file ;

#include <stdio.h>
#include <string.h>

int main()

{

    FILE *file_name;

    char name[200];

    int n, phone, age;

    file_name = fopen("Write.txt", "a");

    if (file_name == NULL)
    {

        printf("File doesn't exist !!!");
    }
    else
    {

        printf("Enter the number of students => ");

        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {

            printf("Details for Student %d\nEnter name : ", i + 1);

            // ? To clear buffer ;

            while (getchar() != '\n');

            gets(name);

            strupr(name);

            printf("Enter age : ");

            scanf("%d", &age);

            printf("Enter phone number : ");

            scanf("%d", &phone);

            fprintf(file_name, "Name : %s\t\tAge : %d\t\t\tPhone : %d\n", name, age, phone);
        }

        printf("\n\nFile updated successfully !!!\n\n");

        fclose(file_name);
    }

    getchar();
}
