// ! Write a C program to print alphabet pattern
// ! triangle as shown below
// ! a
// ! ab
// ! abc
// ! abcd
// ! abcde

#include <stdio.h>

int main()
{

    int i, j, n;

    printf("Enter the last value : ");

    scanf("%d", &n);

    for (i = 97; i <= n; i++)
    {
        for (j = 97; j <= i; j++) // ? a === 97 and n must be 97 or greater than 97;
        {
            printf("%c", j);
        }

        printf("\n");
    }
}