// ! C program to find the frequency of even numbers in matrix ;

#include <stdio.h>

int main()

{

    int arr[3][3] = {{1, 2, 16}, {4, 5, 6}, {7, 8, 9}};

    printf("The Matrix is => \n");

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);

            if (arr[i][j] % 2 == 0)
            {

                count = count + 1;
            }
        }

        printf("\n");
    }

    printf("Frequency of Even Numbers is => %d", count);
}
