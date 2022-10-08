#include <stdio.h>

int main()

{

    int p, q, x, y;

    printf("Enter the value of x :");

    scanf("%d", &x);

    printf("\nEnter the value of y :");

    scanf("%d", &y);

    p = x++;

    q = y++;

    printf("\nx = %d and y = %d\n", x, y);

    printf("p = %d and q = %d\n", p, q);

    p = --x;

    q = --y;

    printf("x = %d and y = %d\n", x, y);

    printf("p = %d and q = %d\n", p, q);
}