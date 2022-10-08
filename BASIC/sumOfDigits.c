// ! C program to find sum of digits of an integer ;

#include <stdio.h>

int main()

{

    int n, temp, rem, sum = 0;

    printf("Enter an integer => ");

    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {

        rem = temp % 10;

        sum = sum + rem;

        temp = temp / 10;
    }

    printf("The sum of digits of %d is %d", n, sum);
}
