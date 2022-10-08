// ! Half Pyramid of Alphabets ;
// ? Output:
// ? A
// ? B B
// ? C C C
// ? D D D D
// ? E E E E E

#include <stdio.h>

int main()

{

    int r, first = 65;

    printf("Enter the number of Row : ");

    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", first);
        }
        first++;

        printf("\n");
    }

    getchar();
}
