// !       1
// !     1 2
// !   1 2 3
// ! 1 2 3 4
// !   1 2 3
// !     1 2
// !       1

#include <stdio.h>

int main()

{

    int n, i, j;

    printf("Enter the last integer => ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {

            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {

        for (j = 1; j <= n - i; j++)
        {

            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {

            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
