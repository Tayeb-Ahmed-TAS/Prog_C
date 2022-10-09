// ! C Program to find first n Fibonacci Sequence using Recursion ;
// ! ex: First 10 Fibonacci Numbers : 0  1  1  2  3  5  8  13  21  34 ;

#include <stdio.h>

int fibonacci(int num);

int main()

{

    int n;

    printf("Enter the number of terms => ");

    scanf("%d", &n);

    printf("\nFirst %d Fibonacci Numbers => ");

    for (int i = 0; i < n; i++)
    {

        printf("%d  ", fibonacci(i));
    }

    return 0;
}

int fibonacci(int num)

{

    if (num == 0)
    {

        return 0;
    }
    else if (num == 1)
    {

        return 1;
    }
    else
    {

        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}
