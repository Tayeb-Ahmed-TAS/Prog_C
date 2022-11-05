// ! C Program to read and print a RxC Matrix, R and C must be input by User ;

#include <stdio.h>

int main()

{

    int i, j, r, c, arr[10][10];

    printf("Enter the number of Rows : ");

    scanf("%d", &r);

    printf("Enter the number of Cols : ");

    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter elements for arr[%d][%d] : ", i + 1, j + 1);

            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Matrix is : \n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }
}
