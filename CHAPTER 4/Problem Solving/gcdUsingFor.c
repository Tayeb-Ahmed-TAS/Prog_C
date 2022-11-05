// ! C program to find GCD of two non-negative integer values using for loop ;

#include <stdio.h>

int main()

{

    int num1, num2, gcd, rem;

    printf("Enter 1st Number => ");

    scanf("%d", &num1);

    printf("Enter 2nd Number => ");

    scanf("%d", &num2);

    int n1 = num1;

    int n2 = num2;

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("\n\nGCD of %d and %d is %d\n\n", num1, num2, gcd);
}
