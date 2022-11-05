// ! Pascal's triangle ;
// ? Output:
// ?            1
// ?          1   1
// ?        1   2   1
// ?      1   3   3    1
// ?    1  4    6   4   1
// ?  1  5   10   10  5   1

#include <stdio.h>

int main()

{

    int r, c = 1;

    printf("Enter the number of Rows : ");

    scanf("%d", &r);

    for (int i = 0; i < r; i++)
    {

        for (int k = 1; k <= r - i; k++)
        {

            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            (j == 0 || i == 0) ? (c = 1) : (c = c * (i - j + 1) / j);

            printf("%4d", c);
        }

        printf("\n");
    }
}
