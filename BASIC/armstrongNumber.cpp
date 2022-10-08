// ! C Program to Check Armstrong Number ;
// ? Syntax: abcd.... = a^n + b^n + c^n + d^n + ....
// ? Example: 153 = 1^3 + 5^3 + 3^3 ;
// ? Example: 1634 = 1^4 + 6^4 + 3^4 + 4^4 ;

#include <stdio.h>
#include <math.h>

int main()

{

    int digits = 0, n, temp, temp2, rem, sum = 0;

    printf("Enter an integer => ");

    scanf("%d", &n);

    temp = temp2 = n;

    while (temp != 0)
    {

        // ? For count the digits ;

        temp = temp / 10;

        digits++;
    }

    while (temp2 != 0)
    {

        rem = temp2 % 10;

        sum = sum + pow(rem, digits);

        temp2 = temp2 / 10;
    }

    (n == sum) ? printf("%d is an Armstrong number", n) : printf("%d is not an Armstrong number", n);
}
