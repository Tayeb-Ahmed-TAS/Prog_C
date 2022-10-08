// ! inverted Half Pyramid of * ;
// ? Output:
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main()

{

    int r;

    printf("Enter the number of Row : ");

    scanf("%d", &r);

    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    getchar();
}
