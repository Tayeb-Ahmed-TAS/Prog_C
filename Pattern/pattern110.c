// ! 1
// ! 1 0
// ! 1 0 1
// ! 1 0 1 0

#include <stdio.h>

int main()

{

    int n;

    printf("Enter the number of Row : ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j % 2);
        }

        printf("\n");
    }
}
