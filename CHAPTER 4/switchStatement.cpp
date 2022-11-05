#include <stdio.h>
#include <string.h>

int main()

{

    int i, m;

    char grade[100];

    printf("Enter your marks :");

    scanf("%d", &m);

    i = m / 10;

    switch (i)
    {

    case 10:
    case 9:
    case 8:

        printf("\nExcellent");
        break;

    case 7:
    case 6:

        printf("Very Good");
        break;

    case 5:
    case 4:

        printf("Good");
        break;

    default:

        printf("Bad");
        break;
    }
}