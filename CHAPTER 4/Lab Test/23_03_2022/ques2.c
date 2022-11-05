// ! Write a program in C to display the pattern like right angle triangle with a number .
// ? Output :
//  ? 1
//  ? 12
//  ? 123
//  ? 1234

#include <stdio.h>

int main()
{

    int i, j, n;

    printf("Enter the last value : ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}