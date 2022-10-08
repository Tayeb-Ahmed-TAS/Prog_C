// ! Half Pyramid of Alphabets ;
// ? Output:
// ? A
// ? A B
// ? A B C
// ? A B C D
// ? A B C D E

#include <stdio.h>

int main()

{

    int r;

    printf("Enter the number of Row : ");

    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 65; j <= i + 64; j++)
        {
            printf("%c ", j);
        }

        printf("\n");
    }
}
