// ! 1
// ! 2 2
// ! 3 3 3
// ! 2 2
// ! 1

#include <stdio.h>

int main()

{

    int n;

    printf("Enter the last number => ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            printf("%d\t", i);
        }

        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {

        for (int j = i; j >= 1; j--)
        {

            printf("%d\t", i);
        }

        printf("\n");
    }

    return 0;
}
