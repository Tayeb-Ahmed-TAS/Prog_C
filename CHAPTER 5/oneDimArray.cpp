#include <stdio.h>

int main()

{

    int a[3], i;

    printf("Enter three numbers : ");

    for (i = 0; i < 3; i++)
    {
        printf("\n");

        scanf("%d", &a[i]);
    }

    printf("\n\nNumbers are : ");

    for (i = 0; i < 3; i++)
    {
        printf("\t%d", a[i]);
    }
}