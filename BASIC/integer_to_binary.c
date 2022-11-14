// ! C Program to convert decimal number to binary

#include <stdio.h>

int main()

{

    int n, temp, rem, i = 1;

    long long bin = 0;

    printf("Enter an integer => ");

    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {

        rem = temp % 2;

        temp = temp / 2;

        bin = bin + rem * i;

        i = i * 10;
    }

    printf("Decimal to Binary : %d = %lld", n, bin);

    return 0;
}
