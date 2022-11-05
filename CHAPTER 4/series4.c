// ! 1/3^2+1/4^2+1/5^2+......+1/n^2 ;

#include <stdio.h>
#include <math.h>

int main()
{

    float i, n, j, s = 0;

    printf("Enter the value of n :  ");

    scanf("%f", &n);

    for (i = 3; i <= n; i++)
    {
        j = pow(i, 2);

        s = s + (1 / j);
    }

    printf("%f", s);
}