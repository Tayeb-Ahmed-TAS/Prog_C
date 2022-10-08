#include <stdio.h>

int main()
{

    int x;

    printf("Please Enter a Number: ");

    scanf("%d", &x);

    // if (x % 2 == 0)

    //     printf("\n%d is Even", x);

    // else

    //     printf("\n%d is Odd", x);

    // ! Using ternery operator;

    (x % 2 == 0) ? printf("\n%d is Even", x) : printf("\n%d is Odd", x);
}