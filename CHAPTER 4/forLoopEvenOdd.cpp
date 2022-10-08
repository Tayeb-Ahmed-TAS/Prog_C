#include <stdio.h>

int main()
{

    int i;

    printf("Odd Numbers\t\t");

    printf("Even Numbers :\n");

    for (i = 1; i <= 100; i++)
    {
        (i % 2 != 0) ? printf("%d \t\t\t", i) : printf("%d\n", i);
    }
}