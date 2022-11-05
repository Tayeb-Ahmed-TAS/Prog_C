// ! C program to calculate factorial of a number ;

#include <stdio.h>

int main()

{

    int n, h = 1;

    printf("Enter any number to calculate factorial : ");

    scanf("%d", &n);

    int i = 1;

    while (i <= n)
    {
        h = h * i;

        i++;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     h = h * i;
    // }

    printf("Factorial of %d => %d", n, h);
}