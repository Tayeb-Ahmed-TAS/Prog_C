// ! a
// ! a b
// ! a b a
// ! a b a b

#include <stdio.h>

int main()

{

    int n;

    printf("Enter the number of rows => ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            (j % 2 == 0) ? printf("b  ") : printf("a  ");
        }

        printf("\n");
    }

    return 0;
}
