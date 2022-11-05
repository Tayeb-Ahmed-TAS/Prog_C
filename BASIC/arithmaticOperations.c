#include <stdio.h>

int main()
{

    int a, b, add, sub, mul, div, rem;

    printf("Enter The First Number: ");

    scanf("%d", &a);

    printf("\nEnter The Second Number: ");

    scanf("%d", &b);

    add = a + b;

    sub = a - b;

    mul = a * b;

    div = a / b;

    rem = a % b;

    printf("The adding value is: %d\nThe substraction value is: %d\nThe multiplication value is: %d\nThe division value is: %d\nThe remainder value is: %d", add, sub, mul, div, rem);
}