// ! 1 + (1+2) + (1+2+3) + (1+2+3+4) + …… + (1+2+3+4+…+n) ;
// ! or
// ! 1+(1+2)+(1+2+3)+.....till n ;

// #include <stdio.h>

// int main()
// {

//     int i, j, n, s = 0;

//     printf("Enter the last value : ");

//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             s = s + j;
//         }
//     }

//     printf("The Sum is %d", s);
// }

#include <stdio.h>
int main()
{

    int n, i, s = 0;

    printf("Enter the last value : ");

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = s + i * (n - i + 1);
    }

    printf("Sum = %d", s);
}