//  ! Program to print lower triangle of a square matrix in C ;

#include <stdio.h>

int main()

{

    int arr[3][3] = {{1, 2, 3}, {6, 8, 9}, {4, 7, 2}};

    printf("Lower Triangular Matrix : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (i >= j) ? (printf("%d\t", arr[i][j])) : (printf("0\t"));
        }

        printf("\n");
    }
}
