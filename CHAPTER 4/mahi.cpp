#include <stdio.h>
int main()
{
    int i, m, n;
    printf("Enter the value of n=");
    scanf("%d", &n);
    for (i = 1; i >= n; i++)
    {
        for (m = 1; m <= i; m++)
        {
            printf("%d", m);
        }

        printf("\n");
    }
}
