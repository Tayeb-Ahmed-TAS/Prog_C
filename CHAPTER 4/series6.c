//  ! 1+x+x^2/2!+......x^n/n!

#include <stdio.h>
#include <math.h>

int main()

{

    float i, n, s = 1, h = 1, x, a;

    printf("Enter the value of x : ");

    scanf("%f", &x);

    printf("Enter the value of n : ");

    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {

        h = h * i;

        a = pow(x, i);

        s = s + (a / h);
    }

    printf("%.3f", s);
}