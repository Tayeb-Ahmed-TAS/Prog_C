// ! shape * ;
// ? Output:
//  *       * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * * * * * *
//          *       *
//          *       *
//          *       *
//  * * * * *       *

#include <stdio.h>

int main()
{

    int i, j, r;

    printf("Enter the number of Row => ");

    scanf("%d", &r);

    for (i = 1; i <= r * 2 - 1; i++)
    {

        for (j = 1; j <= r * 2 - 1; j++)
        {

            (i == r || j == r || i == 1 && j > r || i < r && j == 1 || i > r && j == r * 2 - 1 || i == r * 2 - 1 && j < r) ? printf(" *") : printf("  ");
        }

        printf("\n");
    }
}
