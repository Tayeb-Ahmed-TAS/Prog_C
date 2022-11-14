// ! C program to take integer as input and display it in reverse order. Also compute the sum of the digits

#include <stdio.h>

int main()

{

    long int n, reverse = 0, temp;

    int s = 0, rem;

    printf("Enter an integer => ");

    scanf("%ld", &n);

    temp = n;

    while (temp != 0)
    {

        rem = temp % 10;

        reverse = reverse * 10 + rem;

        s = s + rem;

        temp = temp / 10;
    }

    printf("Reverse of %ld is %ld\n", n, reverse);

    printf("Sum of the digits is %d", s);

    while (n != 0)

        return 0;
}
