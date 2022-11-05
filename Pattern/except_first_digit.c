// ! 1  2  3  4
// ! 2  3  4
// ! 3  4
// ! 4

#include <stdio.h>

int main()

{

    int r;

    printf("Enter the number of Rows => ");

    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = i; j <= r; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }

    return 0;
}
