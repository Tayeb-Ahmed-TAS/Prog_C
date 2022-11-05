// ! C program to Store and print Information of n Students Using Structure ;

#include <stdio.h>
#include <string.h>

struct students
{

    char name[100];

    int roll;

    float marks;
};

int main()
{

    int n;

    printf("How many students ?    Ans : ");

    scanf("%d", &n);

    struct students student[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter informaton for Student %d =>\n", i + 1);

        printf("Name : ");

        // ? It not works in vs code ;

        // fflush(stdin);

        // ? It works every where and it's the better way to clear buffer ;

        while (getchar() != '\n')
            ;

        gets(student[i].name);

        printf("Roll : ");

        scanf("%d", &student[i].roll);

        printf("Marks : ");

        scanf("%f", &student[i].marks);
    }

    for (int i = 0; i < n; i++)
    {

        strupr(student[i].name);

        printf("\n\nInformation of %s =>\n", student[i].name);

        printf("Roll : %d\n", student[i].roll);

        printf("Marks : %.2f\n", student[i].marks);
    }
}
