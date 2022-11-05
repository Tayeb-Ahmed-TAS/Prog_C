// ! C program to add two matrix ;

#include <stdio.h>

int main()

{

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3] = {{10, 25, 36}, {6, 32, 98}, {2, 4, 6}}, sum[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum Matrix => \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
