//  ! C Program to read a matrix and find sum, product of all elements of two dimensional (matrix) array ;

#include <stdio.h>

int main()

{

    int arr[10][10], i, j, r, c, s = 0, p = 1;

    printf("Enter the number of rows : ");

    scanf("%d", &r);

    printf("Enter the number of cols : ");

    scanf("%d", &c);

    printf("Enter the Matrix Elements => \n\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter elements for arr[%d][%d] : ", i + 1, j + 1);

            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            s = s + arr[i][j];

            p = p * arr[i][j];
        }
    }

    printf("\nThe Sum is : %d", s);

    printf("\nThe Product is : %d", p);
}
