// ! Half Pyramid of Numbers ;
// ? Output:
// ? 1
// ? 1 2
// ? 1 2 3
// ? 1 2 3 4
// ? 1 2 3 4 5

#include <stdio.h>

int main()

{

    int r;

    printf("Enter the number of Row : ");

    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    getchar();
}
