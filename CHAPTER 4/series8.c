// ! 1 + 1 / 2 ^ 2 + 1 / 3 ^ 3 + ........ + 1 / n ^ n

#include <stdio.h>
#include <math.h>

int main()

{

    int n;

    float s = 0;

    printf("Enter the last integer => ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        s = s + (1 / pow(i, i));
    }

    printf("The sum is => %.2f", s);

    return 0;
}
