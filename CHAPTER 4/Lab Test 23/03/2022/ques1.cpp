// ! Write a program in C to display the n terms of even natural number and their sum .
// ? Input : 5
// ? Output : The even numbers are : 2 4 6 8 10              The sum of even natural number up to 5 terms : 30

#include <stdio.h>

int main()
{

    int i, j, n, s = 0;

    printf("Enter the last number : ");

    scanf("%d", &n);

    printf("The even numbers are : ");

        for (i = 1; i <= n; i++)
    {
        j = i * 2;

        printf("%d\t", j);

        s = s + j;
    }

    printf("\n\nThe sum of even natural number up to 5 terms : %d", s);
}