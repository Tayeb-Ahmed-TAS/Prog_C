// ! C program to find GCD for both positive and negative numbers ;

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

    n1 = (n1 > 0) ? n1 : -n1;

    n2 = (n2 > 0) ? n2 : -n2;

    while (n1 != n2)
    {

        (n1 > n2) ? (n1 = n1 - n2) : (n2 = n2 - n1);
    }

    gcd = n1;

    printf("\n\nGCD of %d and %d is %d\n\n", num1, num2, gcd);
}
