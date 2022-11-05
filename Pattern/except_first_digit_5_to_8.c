// ! 5  6  7  8
// ! 6  7  8
// ! 7  8
// ! 8

#include <stdio.h>

int main()

{

    for (int i = 5; i <= 8; i++)
    {
        for (int j = i; j <= 8; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }

    return 0;
}
