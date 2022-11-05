#include <stdio.h>

int main()
{

    int marks;

    printf("Enter your marks : ");

    scanf("%d", &marks);

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

    case 3:
    case 2:
    case 1:
    case 0:
        printf("F");
        break;

    default:
        printf("%d is not the correct number", marks);
        break;
    }
}