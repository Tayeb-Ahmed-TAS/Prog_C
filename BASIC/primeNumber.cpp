// ! Prime Number ;

#include <stdio.h>

int main()

{

    int i, f = 0, n;

    printf("Enter a positive number : ");

    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        f = 1;
    }

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            f = 1;

            break;
        }
    }

    printf("\n");

    (n < 0) ? (printf("%d is a negative number. Please Enter a Positive Number", n)) : ((f == 0) ? (printf("%d is a Prime number", n)) : (printf("%d is Not a Prime number", n)));
}
