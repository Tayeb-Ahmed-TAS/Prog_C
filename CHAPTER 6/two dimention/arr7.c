// ! C program to check a given matrix is a sparse matrix or not ;
// ? A sparse matrix is a matrix in which most of the elements are zero ;

#include <stdio.h>

int main()

{

    int arr[10][10], r, c, count = 0;

    printf("Enter the numbers of Rows : ");

    scanf("%d", &r);

    printf("Enter the numbers of Cols : ");

    scanf("%d", &c);

    printf("Enter the Matrix Elements => \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element for Matrix[%d][%d] => ", i + 1, j + 1);

            scanf("%d", &arr[i][j]);

            if (arr[i][j] == 0)
            {
                count = count + 1;
            }
        }
    }

    printf("The Matrix is => \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }

    (count > (r * c) / 2) ? printf("\nThe Matrix is a Sparse Matrix") : printf("\nThe Matrix is Not a Sparse Matrix");
}
