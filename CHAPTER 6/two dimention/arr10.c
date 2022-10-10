// ! C program to find matrix multiplication ;

#include <stdio.h>

int main()

{

    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, arr2[3][3] = {{2, 4, 6}, {8, 10, 12}, {5, 7, 9}}, pro[20][20] = {0};

    printf("The Product is => \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                pro[i][j] = pro[i][j] + arr1[i][k] * arr2[k][j];
            }

            printf("%d\t", pro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
