#include <stdio.h>

int main()
{

    int x, y, p, q;

    printf("Enter the value of x: ");

    scanf("%d", &x);

    printf("\nEnter the value of y: ");

    scanf("%d", &y);

    printf("\nx = %d\t y = %d\n", x, y);

    p = x++;

    q = y++;

    printf("x = %d\t y = %d\n", x, y);

    printf("p = %d\t q = %d\n", p, q);

    p = --x;

    q = --y;

    printf("x = %d\t y = %d\n", x, y);

    printf("p = %d\t q = %d\n", p, q);
}