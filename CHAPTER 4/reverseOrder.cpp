#include <stdio.h>

int main()
{

    long int a, n, s = 0;

    printf("Enter your desire integer input = ");

    scanf("%ld", &a);

    printf("\nThe reverse form of input = ");

    while (a != 0)
    {
        n = a % 10;

        printf("%ld", n);

        s = s + n;

        a = a / 10;
    }

    printf("\nThe Sum is = %d", s);
}