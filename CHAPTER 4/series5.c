// ! 1/1! + 1/2! + 1/3! + ...... + 1/n! ;

#include <stdio.h>

int main()
{
    float n, i, s = 0, h = 1;

    printf("Enter the value of n : ");

    scanf("%f", &n);

    for (i = 1; i <= n; i++)
    {
        h = h * i; // ! for why? ans: 5!=5*4*3*2*1 ;

        s = s + (1 / h);
    }

    printf("%.3f", s);
}