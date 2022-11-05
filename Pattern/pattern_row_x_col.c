// ! 1
// ! 2 4
// ! 3 6 9
// ! 4 8 12 16

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

            printf("%d  ", i * j);
        }

        printf("\n");
    }

    return 0;
}
