#include <stdio.h>

int main()

{

    int a[3][3], i, j;

    printf("Enter matrix of 3*3 : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix is : \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", a[i][j]);
        }

        printf("\n");
    }
}