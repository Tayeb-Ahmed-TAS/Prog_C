// ! Floyd's Triangle ;
// ? Output:
// ? 1
// ? 0 1
// ? 1 0 1
// ? 0 1 0 1
// ? 1 0 1 0 1

#include <stdio.h>

int main()

{

    int n, tri1, tri2;

    printf("Enter the number of rows => ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {

            tri1 = 1;

            tri2 = 0;
        }
        else
        {

            tri1 = 0;

            tri2 = 1;
        }

        for (int j = 1; j <= i; j++)
        {

            (j % 2 == 0) ? printf("%d ", tri1) : printf("%d ", tri2);
        }

        printf("\n");
    }
}
