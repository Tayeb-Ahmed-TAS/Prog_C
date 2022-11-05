#include <stdio.h>

int main()

{

    int m;

    printf("Enter your marks :");

    scanf("%d", &m);

    switch (m / 10)
    {

    case 10:
    case 9:
    case 8:

        printf("Excellent");
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