//  ! C program to print the upper triangular matrix ;

#include <stdio.h>

int main()

{

    int arr[3][3] = {{1, 2, 3}, {6, 5, 8}, {4, 6, 7}};

    printf("Upper Triangular Matrix : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (i <= j) ? printf("%d\t", arr[i][j]) : printf("\t");
        }

        printf("\n");
    }
}
