#include <stdio.h>

int main()

{

    int a, b, c;

    printf("Enter the value of a :");

    scanf("%d", &a);

    printf("Enter the value of b :");

    scanf("%d", &b);

    printf("Enter the value of c :");

    scanf("%d", &c);

    if (a > b)
    {

        if (a > c)
        {

            printf("%d is the Largest number", a);
        }
        else
        {

            printf("%d is the Largest number", c);
        }
    }
    else
    {

        if (b > c)
        {

            printf("%d is the Largest number", b);
        }
        else
        {

            printf("%d is the Largest number", c);
        }
    }
}