// ! C Program to find first n Fibonacci Sequence ;
// ! ex: First 10 Fibonacci Numbers : 0  1  1  2  3  5  8  13  21  34 ;

#include <stdio.h>

int main()

{

    int a, b = 1, c = 0, n;

    printf("Enter number of terms => ");

    scanf("%d", &n);

    printf("First %d Fibonacci Numbers => ", n);

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", c);

        a = b;

        b = c;

        c = a + b;
    }

    return 0;

}
