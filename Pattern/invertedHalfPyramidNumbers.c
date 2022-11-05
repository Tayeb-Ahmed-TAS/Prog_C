// ! inverted Half Pyramid of * ;
// ? Output:
// ? 1 2 3 4 5
// ? 1 2 3 4
// ? 1 2 3
// ? 1 2
// ? 1

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
            printf("%d ", j);
        }

        printf("\n");
    }
}
