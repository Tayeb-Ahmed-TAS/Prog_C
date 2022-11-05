#include <stdio.h>

int main()

{

    int arr[10][10], r, c;

    printf("Enter the number of Rows : ");

    scanf("%d", &r);

    printf("Enter the number of Cols : ");

    scanf("%d", &c);

    printf("Enter Matrix Elements => \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter Elements for Matrix[%d][%d] : ", i + 1, j + 1);

            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Matrix is => \n");

    for (int i = 0; i < r; i++)
    {

        int sum = 0;

        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);

            sum = sum + arr[i][j];
        }

        printf("Sum => %d", sum);

        printf("\n");
    }
}