// ! Write a program in C to display the n terms of even natural number and their sum .
// ? Input : Input the number or terms : 5
// ? Output : 9 99 999 9999 99999             The sum of this series : 111105

#include <stdio.h>

int main()
{

    long int i, n, t = 9;

    int s = 0;

    printf("Input the number or terms : ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = s + t;

        printf("%ld\t", t);

        t = (t * 10) + 9;
    }

    printf("\n\nThe sum of this series : %d", s);
}