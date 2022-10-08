#include <stdio.h>

int main()
{

    int marks;

    printf("Enter your marks => ");

    scanf("%d", &marks);

    if (marks > 100 || marks < 0)
    {
        printf("Error ! Invalid Marks .");
    }
    else
    {
        switch (marks / 10)
        {

        case 10:
        case 9:
        case 8:
            printf("A+");
            break;
        case 7:
            printf("A");
            break;
        case 6:
            printf("A-");
            break;
        case 5:
            printf("B");
            break;
        case 4:
            printf("C");
            break;
        default:
            printf("F");
            break;
        }
    }

    return 0;
}
