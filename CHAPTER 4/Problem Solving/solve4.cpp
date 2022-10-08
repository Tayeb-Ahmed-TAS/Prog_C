// ! Write a C program to print alphabet pattern
// ! triangle as shown below
// ! A
// ! AB
// ! ABC
// ! ABCD
// ! ABCDE

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Input=");
    scanf("%d", &n);
    for (i = 65; i <= n; i++) // ? A === 65 and n must be 65 or greater than 65;
    {
        for (j = 65; j <= i; j++)

        {
            printf("%c", j);
        }

        printf("\n");
    }
}