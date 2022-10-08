// ! Floyd's Triangle ;
// ? Output:
// ? 1
// ? 2 3
// ? 4 5 6
// ? 7 8 9 10

#include <stdio.h>

int main()

{

    int r, triangle = 1;

    printf("Enter the nmber of Row : ");

    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", triangle);

            triangle++;
        }

        printf("\n");
    }
}
